# LinkWithMinecraft

これはコマンド勢募集用リポジトリです。

本システムはピンクローターとマインクラフトを連携して動作させることができるシステムです。動作の様子についてはFormに添付の動画をご覧ください。システム概要を示したスライド資料を./slides/resume.pdfに置いておきます。

## Requirements

- Arduino IDE

- MCreator Link for Arduino 1.15.2

- Minecraft Forge 31.2.33

- Minecraft 1.15.2

- JVM8

- ピンクローター

- ドライバ回路

- Atmega32u4 (Arduino micro互換)

  ## getting start

  1. ピンクローターの改造を行います。単純に電源を割り込ませてFETで制御できるようにしただけです。

  2. マイコンのピン10から信号を出力することを考えます。ピン10を入力としてFETのスイッチング回路を組みます。定数は適当です。

  3.  https://github.com/Pylo/MCreatorLinkArduino のsetup and getting startedに沿ってマイコンのプログラム書き込みを行います。

  4. Arduino IDEのツールー＞ライブラリマネージャからMCreatorをインストールします。

  5. Arduinoを接続し、本リポジトリの ./MC/MC.inoをコンパイル、書き込みます。

  6. ForgeとMCreator Linkを導入したマイクラワールド選択画面でLキーを押し、つないでるArduinoをConnectで接続します。

  7. マインクラフト内で回路を組みます。単純なNOT回路です。コマンドはそれぞれ `/link digitalwrite 10 0` と  `/link digitalwrite 10 1`にします。０と１を逆に書くと論理が逆になります。

  8. マイクラ内でスイッチを入れるとコマンドが実行され、ピンクローターが動作します。もちろん、コマンドを直接たたいても動作します。

     

 