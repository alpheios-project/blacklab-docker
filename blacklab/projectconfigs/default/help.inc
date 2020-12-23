<style type="text/css">
  td {
    border: 1px solid black;
    padding: 5px;
  }
</style>

<h2>Corpus Search Tips</h2>
<p>The details of how to search the data in the <b>Latin Lemmatized Text
  Corpus</b> are provided below.</p>
<p>See the <b>Page Guide</b> for help on the general search features of the Blacklab
  platform. </p>
<table>
  <caption><h4>Searchable Token Attributes</h4></caption>
  <thead>
    <tr>
      <th>Attribute</th>
      <th>Description</th>
      <th>Example</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>word</td>
      <td>The text of a word.</td>
      <td>mare</td>
    </tr>
    <tr>
    <td>lemma</td>
    <td>The text of the lemma of a word.</td>
    <td>mas</td>
    </tr>
    <tr>
    <td>pos</td>
    <td>The part of speech of a word, as encoded per the details provided below.</td>
    <td>NOM</td>
    </tr>
    <tr>
      <td>msd</td>
      <td>The morphological features of a word, as encoded via the <a href="https://universaldependencies.org/format.html" target="_blank">CONLL-U</a> format of <a href="https://universaldependencies.org/u/feat/index.html" target="_blank">Universal
          Dependencies Morphological Features</a> tagset.</td>
      <td>Case=Nom|Numb=Sing</td>
    </tr>
    <tr>
      <td>ref</td>
      <td>The passage reference in which a word is found.</td>
      <td>86</td>
    </tr>
    <tr>
      <td>in</td>
      <td>The reference type of the parent citable passage</td>
      <td>line</td>
    </tr>
</table>
<table>
  <caption><h4>Part of Speech Attribute Values</h4></caption>
  <thead>
    <tr>
      <th>Tag</th>
      <th>French</th>
      <th>English</th>
      <th>UD POS</th>
      <th>Example</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>ADJadv.mul</td>
      <td>Numéral Adverbial Multiplicatif</td>
      <td>Multiplicative numeral adverbial</td>
      <td>ADV</td>
      <td>quadragies</td>
    </tr>
    <tr>
      <td>ADJadv.ord</td>
      <td>Numéral Adverbial Ordinal</td>
      <td>Ordinal numeral adverb</td>
      <td>ADV</td>
      <td>secundo</td>
    </tr>
    <tr>
      <td>ADJcar</td>
      <td>Numéral Cardinal</td>
      <td>Cardinal</td>
      <td>NUM</td>
      <td>decem, ducenti, duo</td>
    </tr>
    <tr>
      <td>ADJdis</td>
      <td>Numéral Distributif</td>
      <td>Distributive numeral</td>
      <td>ADJ</td>
      <td>tricenus, trinus, uicenus, undenus</td>
    </tr>
    <tr>
      <td>ADJmul</td>
      <td>Numéral Multiplicatif</td>
      <td>Multiplicative numeral</td>
      <td>ADJ</td>
      <td>septemplex, simplex, triplex</td>
    </tr>
    <tr>
      <td>ADJord</td>
      <td>Numéral Ordinal</td>
      <td>Ordinal numeral</td>
      <td>ADJ</td>
      <td>octogesimus, primus, prior</td>
    </tr>
    <tr>
      <td>ADJqua</td>
      <td>Adjectif qualificatif</td>
      <td>Adjective</td>
      <td>ADJ</td>
      <td></td>
    </tr>
    <tr>
      <td>ADV</td>
      <td>Adverbe</td>
      <td>Adverb</td>
      <td>ADV</td>
      <td></td>
    </tr>
    <tr>
      <td>ADVint</td>
      <td>Adverbe interrogatif</td>
      <td>Interogative Adverb</td>
      <td>ADV</td>
      <td>an, anne, cuicuimodi2</td>
    </tr>
    <tr>
      <td>ADVint.neg</td>
      <td>Adverbe interrogatif négatif</td>
      <td>Negative Interrogative Adverb</td>
      <td>ADV</td>
      <td>necne, nonne, quidni</td>
    </tr>
    <tr>
      <td>ADVneg</td>
      <td>Adverbe négatif</td>
      <td>Negative Adverb</td>
      <td>ADV</td>
      <td>haud, ne3, nec1</td>
    </tr>
    <tr>
      <td>ADVrel</td>
      <td>Adverbe relatif</td>
      <td>Relative Adverb</td>
      <td>ADV</td>
      <td>proquam, prout</td>
    </tr>
    <tr>
      <td>CONcoo</td>
      <td>Conjonction de coordination</td>
      <td>Coordinating conjunction</td>
      <td>CCONJ</td>
      <td></td>
    </tr>
    <tr>
      <td>CONsub</td>
      <td>Conjonction de subordination</td>
      <td>Subordinating conjunction</td>
      <td>SCONJ</td>
      <td></td>
    </tr>
    <tr>
      <td>INJ</td>
      <td>Interjection</td>
      <td>Interjection</td>
      <td>INTJ</td>
      <td></td>
    </tr>
    <tr>
      <td>NOMcom</td>
      <td>Nom commun</td>
      <td>Noun</td>
      <td>NOUN</td>
      <td></td>
    </tr>
    <tr>
      <td>NOMpro</td>
      <td>Nom propre</td>
      <td>Proper Noun</td>
      <td>PROPN</td>
      <td></td>
    </tr>
    <tr>
      <td>OUT</td>
      <td>Non-Géré</td>
      <td>Out</td>
      <td>X</td>
      <td></td>
    </tr>
    <tr>
      <td>PRE</td>
      <td>Préposition</td>
      <td>Preposition</td>
      <td>ADP</td>
      <td></td>
    </tr>
    <tr>
      <td>PROdem</td>
      <td>Pronom démonstratif</td>
      <td>Demonstrative Pronoun</td>
      <td>PRON</td>
      <td>hic, idem, ille</td>
    </tr>
    <tr>
      <td>PROind</td>
      <td>Pronom indéfini</td>
      <td>Indefinite Pronoun</td>
      <td>PRON</td>
      <td>aliquantus, aliquis, aliquot, alis, alius, alter</td>
    </tr>
    <tr>
      <td>PROint</td>
      <td>Pronom interrogatif</td>
      <td>Interrogative Pronoun</td>
      <td>PRON</td>
      <td>cuias, cuius, ecquis</td>
    </tr>
    <tr>
      <td>PROper</td>
      <td>Pronom personnel</td>
      <td>Personal Pronoun</td>
      <td>PRON</td>
      <td>ego, nos, tu, uos</td>
    </tr>
    <tr>
      <td>PROpos</td>
      <td>Pronom possessif</td>
      <td>Possessive Pronoun</td>
      <td>PRON</td>
      <td>mei, meus, noster</td>
    </tr>
    <tr>
      <td>PROpos.ref</td>
      <td>Pronom possessif réfléchi</td>
      <td>Relfexive Possessive Pronoun</td>
      <td>PRON</td>
      <td>Sui, suus</td>
    </tr>
    <tr>
      <td>PROref</td>
      <td>Pronom réfléchi</td>
      <td>Reflexive Pronoun</td>
      <td>PRON</td>
      <td>sepse, sui</td>
    </tr>
    <tr>
      <td>PROrel</td>
      <td>Pronom relatif</td>
      <td>Relative Pronoun</td>
      <td>PRON</td>
      <td>cuius, qualis, qualiscumque</td>
    </tr>
    <tr>
      <td>PUNC</td>
      <td>Ponctuation</td>
      <td>Punctuation</td>
      <td>PUNCT</td>
      <td></td>
    </tr>
    <tr>
      <td>VER</td>
      <td>Verbe</td>
      <td>Verb</td>
      <td>VERB</td>
      <td></td>
    </tr>
    <tr>
      <td>VERaux</td>
      <td>Verbe auxiliaire</td>
      <td>Auxiliary Verb</td>
      <td>AUX</td>
      <td></td>
    </tr>
    <tr>
      <td>FOR</td>
      <td>Termes étrangers</td>
      <td>Foreign words</td>
      <td>X</td>
      <td></td>
    </tr>
  </tbody>
</table>
<table>
  <caption><h4>Corpus Metadata Filters</h4></caption>
  <thead>
    <tr>
      <th>Filter</th>
      <th>Description</th>
      <th>Example</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Author</td>
      <td>The author of a work.</td>
      <td>Caesar</td>
    </tr>
    <tr>
      <td>Title</td>
      <td>The title of a work.</td>
      <td>De Bello Civile</td>
    </tr>
    <tr>
    <td>Doc id</td>
    <td>The identifier of the edition.</td>
    <td>urn:cts:latinLit:phi0448.phi002.perseus-lat2</td>
    </tr>
    <tr>
    <td>Input file</td>
    <td>The path to the source file</td>
    <td>/xml/urn:cts:latinLit:phi0448.phi002.perseus-lat2.xml</td>
    </tr>
</table>
