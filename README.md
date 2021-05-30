# OpenSiv3D GitHubActions

GitHubActionsでOpenSiv3Dアプリケーションをビルドする実験です。
ビルドのために`App/engine`フォルダを`.gitignore`から外しています

### サンプルについて

- ./github/workflows/build.yml

push時にアプリケーションをビルドし
ArtifactsでAppフォルダごとzipダウンロードできるようにしています。
(exe等のビルド結果だけでもいいかもしれない)