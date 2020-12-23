function disableAlpheios(event) {
  const path = alpheiosBuildPath(event.target)
  if (!Array.isArray(path)) { path = [path] }
  const enable = path.some(element =>
    // need to enable mousemove for this to not interfere with the
    // click function -- can't do that and have preTriggerCallback
    // until https://github.com/alpheios-project/alpheios-core/issues/589
    // is fixed
    //element.classList.contains('concordance') ||
    element.classList.contains('concordance-details')
  )
  return enable
}

function alpheiosBuildPath (element, path = []) {
  path.push(element)
  if (element.parentElement) {
    path = alpheiosBuildPath(element.parentElement, path)
  }
  return path
}

const alpheiosProps = {
  alpheiosEmbedJSURL: 'https://cdn.jsdelivr.net/npm/alpheios-embedded@rc/dist/alpheios-embedded.js',
  alpheiosComponentsJSURL: 'https://cdn.jsdelivr.net/npm/alpheios-components@rc/dist/alpheios-components.js',
  clientProps: {
                  clientId:'alpheios-reader',
                  authEnv: null,
                  enabledSelector:'.results-container',
                  textLangCode: 'lat',
                  triggerPreCallback: disableAlpheios,
                  toolbarInitialPos: {
                    top: '150px',
                    right: '5px'
                  }
                }
}


document.addEventListener("DOMContentLoaded", function(event) {
  import (alpheiosProps.alpheiosEmbedJSURL).then(embedLib => {
    console.info(`Embedded library has been imported successfully`)

    window.AlpheiosEmbed.importDependencies({
      mode: 'custom',
      libs: { components: alpheiosProps.alpheiosComponentsJSURL }
    }).then(Embedded => {
          const embedded = new Embedded(alpheiosProps.clientProps)
          embedded.activate()
    }).catch(e => {
      console.error(`Import of an embedded library dependencies failed: ${e}`)
    })
  }).catch(e => {
    console.error(`Import of an embedded library failed: ${e}`)
  })
})
