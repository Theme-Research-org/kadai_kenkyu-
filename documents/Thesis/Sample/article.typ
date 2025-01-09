#import "assets/modules/_conf.typ": *
#import "assets/modules/articleFig.typ": articleFig
#import "assets/modules/personHandled.typ": personHandled

#let member = (
  // クラス, 名前
  (class: "J3A", name: "日比 瑛太", handled: [
    // 自分が担当したところ
    + XXX
  ], handledResult: [
    // 自分が担当したところの結果
    + XXX
    + XXX
  ], futureIssues: [
    // 自分が担当したところの今後の課題・考察
    + XXX
  ]),
  (class: "J3A", name: "本田 楓", handled: [
    + XXX
  ], handledResult: [
    + XXX
    + XXX
  ], futureIssues: [
    + XXX
  ]),
  (class: "J3A", name: "本間 晶", handled: [
    + XXX
  ], handledResult: [
    + XXX
    + XXX
  ], futureIssues: [
    + XXX
  ]),
  (class: "J3A", name: "松浦 颯", handled: [
    + XXX
  ], handledResult: [
    + XXX
    + XXX
  ], futureIssues: [
    + XXX
  ]),
)

#show: doc => conf(
  title: (
    // 表題 - 和文
    jp: [音声認識を用いたキャラクター育成アプリケーションの開発],
    // 表題 - 英文
    en: [Development of Character Growing Application Using Speech Recognition],
  ),
  // メンバー
  member: member,
  // 指導教諭
  teacher: [辰巳 良美, 中山 智明],
  // 発表学科略号/発表番号
  header: [J03],
  doc,
)

= はじめに
#i 近年、青少年の間で「ヤバい」「エモい」などの単純な表現が多用され、国語力や表現力の低下が問題視されている。文部科学省の調査によると、コミュニケーションには「意思疎通」「協調性」「自己表現力」が必要とされている。しかし、適切な言葉を用いる力が不足しているため、日常会話でも意思を正確に伝えられないケースがあると考えられる。私たちは、普段からのコミュニケーションが表現力の向上につながると考え、コミュニケーションを通じて表現力を育成するアプリケーションの開発を行った。

= 論理・実験
== 小見出し1
#articleFig(
  imgPath: "img/2023-12-18-00-14-25.png",
  imgCaption: [Lenna @lenna],
)[#i あのイーハトーヴォのすきとおった風、夏でも底に冷たさをもつ青いそら、うつくしい森で飾られたモリーオ市、郊外のぎらぎらひかる草の波。]

== 小見出し2
#i あのイーハトーヴォのすきとおった風、夏でも底に冷たさをもつ青いそら、うつくしい森で飾られたモリーオ市、郊外のぎらぎらひかる草の波。

= 実験結果
#i あのイーハトーヴォのすきとおった風、夏でも底に冷たさをもつ青いそら、うつくしい森で飾られたモリーオ市、郊外のぎらぎらひかる草の波。

= 比較・考察
#i あのイーハトーヴォのすきとおった風、夏でも底に冷たさをもつ青いそら、うつくしい森で飾られたモリーオ市、郊外のぎらぎらひかる草の波。

= 結論
#i あのイーハトーヴォのすきとおった風、夏でも底に冷たさをもつ青いそら、うつくしい森で飾られたモリーオ市、郊外のぎらぎらひかる草の波。

= 今後の課題
#i あのイーハトーヴォのすきとおった風、夏でも底に冷たさをもつ青いそら、うつくしい森で飾られたモリーオ市、郊外のぎらぎらひかる草の波。

= 引用文献
#bibliography("refs.yml", title: [])

#pagebreak()
#for p in member {
  personHandled(
    //
    person: p,
    handled: p.handled,
    handledResult: p.handledResult,
    futureIssues: p.futureIssues,
  )
  if p.name != member.last().name {
    hr
  }
}