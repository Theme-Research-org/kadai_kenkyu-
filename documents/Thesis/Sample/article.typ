#import "assets/modules/_conf.typ": *
#import "assets/modules/articleFig.typ": articleFig
#import "assets/modules/personHandled.typ": personHandled

#let member = (
  // クラス, 名前
  (class: "J3A", name: "日比 瑛太", handled: [
    // 自分が担当したところ
    + システム開発
  ], handledResult: [
    // 自分が担当したところの結果
    おおむね正しい感情の表現を行うことができたが、怒りに関しては正確な表現が困難だった。レスポンスについては平均して7～8秒で、ある程度の自然な会話が可能であることが確認できた。
  ], futureIssues: [
    // 自分が担当したところの今後の課題・考察
    怒りに関しては、より正確な表現を行うために、感情値の調整を行いたい。また、レスポンスについては、より高速な応答を実現するために、システムの構成を見直す必要がある。
  ]),
  (class: "J3A", name: "本田 楓", handled: [
    + ゲームUI、タイトルロゴ作成
    + ドットデザイン
    + 3D小物作成
  ], handledResult: [
    親しみやすいポップなデザインができたと思う。3Dではキャラクターの等身や雰囲気に合わせて小物を作成することができた。
  ], futureIssues: [
    ロゴデザインではアプリの親しみやすさを表すことができたのではないかと思う。UIとして、2D、3Dを想定したものは作成できたが、ドットの際に使用するものの作成が抜けていたのでこれから追加できるように準備していきたい。
  ]),
  (class: "J3A", name: "本間 晶", handled: [
    + キャラクターデザイン
    + Live2Dモデルの制作
  ], handledResult: [
    キャラクターデザインは全8種類、モデルは3体分完成した。プレイヤーにとって親しみやすいよう、動物をモチーフとしてキャラクターのデザインを行い、飽きがこないようなモデルの動きを製作した。
  ], futureIssues: [
    キャラクターに揺れものを追加して、視覚的情報量を多くし、飽きがこないようにする。動きがどのキャラクターでも比較的変わらないので、そのキャラクターだけの特有のモーションなどを追加することでプレイヤーのプレイ意欲を高められると考える。
  ]),
  (class: "J3A", name: "松浦 颯", handled: [
    + 3DCG関連のグラフィック
  ], handledResult: [
    ゲームに対応した表情差分付きの3DCGキャラクターを製作し裸眼立体視を利用した立体的に見えるゲーム演出を製作することができた。また、感情を表現するために複数のアニメーションを製作した。
  ], futureIssues: [
    今回は一定の位置関係からしか立体的に見ることができないようになってしまっているので、Head-coupled Perspectiveを利用してどの方向からでも立体的に見えるシステムを導入したい。また、キャラクターアニメーションだけではない演出を追加することでよりユーザーに楽しんでもらえるようにしたい。
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
#i 近年、青少年の間で「ヤバい」「エモい」といった単純な表現が多用され、国語力や表現力の低下が問題視されている。厚生労働省の調査 @mhlw によると、効果的なコミュニケーションには「意思疎通」「協調性」「自己表現能力」が不可欠とされている。しかし、適切な言葉を用いる力が不足しているために、日常会話で自分の意図を正確に伝えられないケースが増えていると考える。また、教育現場では社会性やコミュニケーション能力の低下が指摘されている。@mext-comm 一方、経団連の新卒採用に関するアンケート調査 @keidanren では、企業が採用選考で最も重視する要素が「コミュニケーション能力」であることが分かっている。これらの結果から、企業が求める能力と若年層が現実に持つスキルとの間に乖離が生じていると考えられる。こうした現状から我々は、普段から積極的にコミュニケーションを取る機会を提供することで、表現力やコミュニケーション能力の向上につながると考えた。

#i そこで本研究では、ユーザーがキャラクターとの対話によってコミュニケーション能力を向上させることを目的としたキャラクター育成アプリケーションの開発を行った。

= 論理・実験
== アプリケーションの概要
#articleFig(
  imgPath: "img/Plutchik_Dyads.svg",
  imgCaption: [プルチックの感情の輪 @plutchik],
)[#i 本アプリケーションはキャラクター育成ゲームである。ユーザーがキャラクターに対して話しかけることで、キャラクターが返答を行う。キャラクターはプルチックの感情の輪に基づいた8つの感情 @plutchik をシミュレーションし、ユーザーの発話内容に応じて感情を変化させる。感情の変化はキャラクターの表情や口調に反映される。一定回数の会話を行うとキャラクターが進化し、感情の出現割合によってその進化先が分岐する。ユーザーはキャラクターの感情を観察することで、自分の発話内容が相手にどのような影響を与えるかを学ぶことができる。]

== システム面について
#i ゲームエンジンには、Live2Dとの互換性の関係からUnityを採用した。音声認識にはOpenAIのWhisperを採用し、ユーザーの発話内容をテキストに変換する。Whisperは他の音声認識に比べてその精度が高く、また多言語に対応していることからこれを採用した。キャラクターとの会話にはGPT-4o miniを使用し、テキスト生成の前に、キャラクターの感情として「喜び」「信頼」「恐れ」「驚き」「悲しみ」「嫌悪」「怒り」「期待」の8つを0～9の10段階（以下「感情値という」）でシミュレーションしている。感情値はキャラクターの口調や表情などに反映され、また感情値の出現割合によって1段階目の進化先が分岐し、キャラクターの性格に影響を与える。

#articleFig(
  imgPath: "img/sequence_diagram.svg",
  imgCaption: [音声会話のシーケンス図]
)[#i 音声会話の実装は次のようになっている。ユーザーの音声はAWS Lambdaを通じてWhisperへ送られ、文字起こしが行われる。この文章はこれまでの会話履歴と合わせてGPT-4o miniに入力され、会話文と感情値の生成が行われる。生成された会話文はVOICEVOXにより音声に変換された後、感情値とともにクライアントへ送られる。]

== デザイン面について
#i キャラクターデザインはドット絵、Live2D、3Dの3種類を製作し、キャラクター進化に3つの段階を設けた。ドット絵のモデルでは、プレイヤーにキャラクターの進化先を予測されないように、表情差分を5種類、カラーバリエーションを7種類製作した。Live2Dモデルでは、プレイヤーが親しみやすいように動物をモチーフとしたキャラクターデザインを行った。また、愛着を持ってもらいやすいよう、首を傾げたり尻尾が揺れるなどの可愛らしいモーションを製作した。3Dモデルでは5種類の表情差分を製作した。

#i 3Dの段階では、ゲームをより楽しんでもらうための効果として、裸眼立体視に挑戦した。裸眼立体視は錯視効果の一種で、3DメガネやHMD（ヘッドマウントディスプレイ）を使わずに立体視を楽しむことができる。

== 感情シミュレーションについての実験
#i 本番環境と同じシステムプロンプトを入力したアシスタントに対して、8感情から「喜び」「恐れ」「悲しみ」「怒り」の4感情を引き出すであろうプロンプトをそれぞれ100パターン入力し、シミュレーションの正確性を確認した。正誤判定は、当該の感情値が最も高い値であるか否かで行った。
== レスポンスについての実験
#i 1文と3文での2パターンで会話を行い、返答にかかる時間を測定した。また、1文と3文での会話の平均時間を比較した。

= 実験結果
== システム面

#articleFig(
  imgPath: "img/accuracy_plot.svg",
  imgCaption: [感情シミュレーションの実験結果]
)[
#i 感情シミュレーションに関する実験の結果は次のようになった。「喜び」と「悲しみ」についてはそれぞれ8割以上、「恐れ」についても7割ほどの精度を確認したが、「怒り」についてはわずか9%とかなり低い値となり、ほとんどのパターンで感情値が0～1を示していた。
]

#i レスポンスに関する実験の結果は次のようになった。

#figure(
  caption: "レスポンスの実験結果",
  table(
    columns: 7,
    align: center,

    [], [1回目], [2回目], [3回目], [4回目], [5回目], [平均],
    [1文], [6.72], [7.32], [9.27], [5.93], [6.23], [7.09],
    [3文], [7.99], [7.62], [8.70], [9.26], [8.96], [8.51]
  )
)

#i 応答時間は平均して7～8秒だった。最速と最遅の差は3秒程度であり、1文と3文での会話による応答時間の差は1秒程度であった。

== デザイン面
#i キャラクターデザインがシンプルすぎたため、視覚情報をさらに追加することでユーザーがキャラクターとの触れ合いに飽きてしまわないような工夫が必要だと感じた。裸眼立体視は街中のビジョンを参考にしたため、見上げる時に立体的になる構図になってしまっており、斜め上から立体的に見れるように変更する必要があると分かった。

= 比較・考察
== システム面
#i シミュレーション実験の結果の要因として、学習時のチューニングによる影響が考えられる。このようなAIを公開するにあたって、開発者は差別や情報の偏りといった課題をある程度クリアする必要がある。そのため、学習データに存在するバイアスの除去など、何らかの調整を行っていることがある。@openai このことから、今回利用したGPT-4o miniはユーザーに対立するような生成を制限されているのだと考えられる。

#i レスポンスについては、今回の構成ではこれ以上の高速化は厳しいと思われる。システムが外部APIに依存した設計であるため、ネットワークの遅延やAPI自体の応答時間に影響される。

== デザイン面
#i 裸眼立体視は一定の場所からしか効果を得ることができないため、その位置（スイートスポット）の設定が重要となる。今回は対象年齢となる子供の座高や椅子と机の高さからスイートスポットを設定した。しかし、これは平均的な座高を基準にしているため、人によって大きく異なった見え方になってしまう恐れがある。そのため、実際のユーザーに合わせたスイートスポットの設定が必要であると感じた。

= 結論
#i 本研究では、キャラクター育成アプリケーションの開発を行った。感情のシミュレーションにおいては、喜びや悲しみについては高い精度を達成したが、怒りに関しては正確な表現が困難であることが分かった。また、レスポンスについては平均して7～8秒で、ある程度の自然な会話が可能であることが確認できた。今後は、感情の表現をより正確に行うためのチューニングや、レスポンスの高速化を実現するためのシステムの見直しが必要である。

= 今後の課題
== システム面
#i 怒りに関しては、感情値の調整を行い、より正確な表現を行うためのチューニングを行いたい。また、レスポンスについては、より高速な応答を実現するために、システムの構成を見直す必要があるだろう。

#i また、実際に会話した時に感じたこととして、対等な立場での会話ができていないと感じた。キャラクターが受動的に返答を行うだけでなく、自発的に会話を始めるなど、より自然な会話を実現するための工夫が必要だと感じた。

== デザイン面
#i 2Dおよび3Dのグラフィックでは、全体的に感情を表現するためのレパートリーが欠けていたため、AIを使って感情を表現するというゲームの特徴をより活かせるようにパターンを追加していきたい。3Dのグラフィックでは短い距離感の場合頭の位置がズレると立体的に見えなくなってしまうという欠点があったため、Head-coupled Perspectiveの技術を導入し、頭の位置を追尾して立体的に見えるようにしたい。


= 引用文献
#bibliography("refs.yml", title: [])

#hr

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