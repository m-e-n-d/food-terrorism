# food-terrorism

キーボードショートカットからランダムな食べ物の画像検索を行うスクリプト。

## 動作確認済み環境
* PC
    * macOS Big Sur(Version 11.2.3)
* マイコン周り
    * Arduino Leonardo
    * Arduino IDE 1.8.15

## ファイル
```
├── README.md         #このファイル
├── bin
│   └── fire          #スクリプトファイル
├── switch.ino        #ボタンに設定するスケッチ
└── test.ino.example  #ボタンの動作確認用スケッチ
```

## 使い方
リポジトリをcloneする。
```shell
$ git clone https://github.com/m-e-n-d/food-terrorism.git
```

### iCanHazShortcutをインストールする
* キーボードショートカットからshellコマンドを実行するアプリ:[iCanHazShortcut](https://github.com/deseven/icanhazshortcut)をインストールする。
* 下記を例に、`Workdir`にcloneしたプロジェクトフォルダを設定する。


### Arduino Leonardoにスケッチを書き込む
* [Arduino IDE](https://www.arduino.cc/en/software)等でArduino Leonardoに`switch.ino`の内容を書き込む。
    * デフォルトでは`shift + option + command + m`を送るように設定している。任意のショートカットキーに設定可能。

### 画像の表示
* ランダムで選ばれた食べ物でgoogle画像検索をした結果が表示される。

## 動作確認
### スクリプトの動作確認
`bin/fire`を実行し、1種類のランダムな食べ物の画像がブラウザで表示されることを確認
```shell
$ bin/fire
```

### ボタンの動作確認
`test.ino.example`の中身をArduino IDEのスケッチにコピーし、Arduinoにアップロードする。
テキスト入力エリアにフォーカスを設定し、5番-9番ピンを接続・切断するとテキストに`PUSH!`が入力されることを確認。

