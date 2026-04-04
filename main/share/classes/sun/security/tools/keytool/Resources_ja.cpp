#include <sun/security/tools/keytool/Resources_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$ObjectArray2* Resources_ja::contents = nullptr;

void Resources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ja::getContents() {
	return Resources_ja::contents;
}

void Resources_ja::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"STAR"_s,
			"*******************************************"_s
		}),
		$$new($ObjectArray, {
			"STARNN"_s,
			"*******************************************\n\n"_s
		}),
		$$new($ObjectArray, {
			".OPTION."_s,
			" [OPTION]..."_s
		}),
		$$new($ObjectArray, {
			"Options."_s,
			u"オプション:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"%sオプションが複数回指定されています。最後のもの以外はすべて無視されます。"_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"1つのコマンドのみ許可されます: %1$sと%2$sの両方が指定されました。"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			u"このヘルプ・メッセージを表示するには\"keytool -?、-hまたは--help\"を使用します"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			u"キーおよび証明書管理ツール"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			u"コマンド:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"command_nameの使用方法については、\"keytool -command_name --help\"を使用します。\n事前構成済のオプション・ファイルを指定するには、-conf <url>オプションを使用します。"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			u"証明書リクエストを生成します"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			u"エントリの別名を変更します"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			u"エントリを削除します"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			u"証明書をエクスポートします"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			u"キー・ペアを生成します"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			u"秘密キーを生成します"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			u"証明書リクエストから証明書を生成します"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			u"CRLを生成します"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			u"{0}秘密キーを生成しました"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			u"{0}ビット{1}秘密キーを生成しました"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			u"JDK 1.1.x-styleアイデンティティ・データベースからエントリをインポートします"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			u"証明書または証明書チェーンをインポートします"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			u"パスワードをインポートします"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"別のキーストアから1つまたはすべてのエントリをインポートします"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			u"キー・エントリのクローンを作成します"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			u"エントリのキー・パスワードを変更します"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"キーストア内のエントリをリストします"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			u"証明書の内容を出力します"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			u"証明書リクエストの内容を出力します"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			u"CRLファイルの内容を出力します"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			u"自己署名型証明書を生成します"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"キーストアのストア・パスワードを変更します"_s
		}),
		$$new($ObjectArray, {
			"showinfo.command.help"_s,
			u"セキュリティ関連情報を表示します"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			u"処理するエントリの別名"_s
		}),
		$$new($ObjectArray, {
			"groupname.option.help"_s,
			u"グループ名。たとえば、楕円曲線名です。"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			u"出力先の別名"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			u"出力先キーのパスワード"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			u"出力先キーストア名"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"出力先キーストアの保護対象パスワード"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			u"出力先キーストア・プロバイダ名"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			u"出力先キーストアのパスワード"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			u"出力先キーストアのタイプ"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			u"識別名"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			u"X.509拡張"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			u"出力ファイル名"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			u"入力ファイル名"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			u"キー・アルゴリズム名"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			u"キーのパスワード"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			u"キーのビット・サイズ"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			u"キーストア名"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			u"cacertsキーストアにアクセスする"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"警告: cacertsキーストアにアクセスするには-cacertsオプションを使用してください"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			u"新規パスワード"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			u"プロンプトを表示しない"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			u"保護メカニズムによるパスワード"_s
		}),
		$$new($ObjectArray, {
			"tls.option.help"_s,
			u"TLS構成情報を表示します"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			u"名前でセキュリティ・プロバイダを追加する(SunPKCS11など)\n-addproviderの引数を構成する"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			u"完全修飾クラス名でセキュリティ・プロバイダを追加する\n-providerclassの引数を構成する"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			u"プロバイダ名"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			u"プロバイダ・クラスパス"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			u"RFCスタイルの出力"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			u"署名アルゴリズム名"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			u"ソース別名"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			u"ソース・キーのパスワード"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			u"ソース・キーストア名"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"ソース・キーストアの保護対象パスワード"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			u"ソース・キーストア・プロバイダ名"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			u"ソース・キーストアのパスワード"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			u"ソース・キーストアのタイプ"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			u"SSLサーバーのホストとポート"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			u"署名付きJARファイル"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			u"証明書の有効開始日時"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			u"キーストアのパスワード"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			u"キーストアのタイプ"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			u"cacertsからの証明書を信頼する"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			u"詳細出力"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"妥当性日数"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			u"失効する証明書のシリアルID"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			u"keytoolエラー: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"不正なオプション:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			u"不正な値: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			u"不明なパスワード・タイプ: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			u"環境変数が見つかりません: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			u"ファイルが見つかりません: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"コマンド・オプション{0}には引数が必要です。"_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"警告: PKCS12キーストアでは、ストアのパスワードとキーのパスワードが異なる状況はサポートされません。ユーザーが指定した{0}の値は無視します。"_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"-keystoreまたは-storetypeオプションは、-cacertsオプションとともに使用できません"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"-storetypeが{0}の場合、-keystoreはNONEである必要があります"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			u"再試行が多すぎます。プログラムが終了しました"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"-storetypeが{0}の場合、-storepasswdコマンドおよび-keypasswdコマンドはサポートされません"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"-storetypeがPKCS12の場合、-keypasswdコマンドはサポートされません"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"-storetypeが{0}の場合、-keypassと-newは指定できません"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"-protectedが指定されている場合、-storepass、-keypassおよび-newは指定できません"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"-srcprotectedが指定されている場合、-srcstorepassおよび-srckeypassは指定できません"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"キーストアがパスワードで保護されていない場合、-storepass、-keypassおよび-newは指定できません"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"ソース・キーストアがパスワードで保護されていない場合、-srcstorepassおよび-srckeypassは指定できません"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			u"startdate値が無効です"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			u"妥当性はゼロより大きい必要があります"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			u"%sはプロバイダではありません"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"プロバイダ名\"%s\"が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			u"プロバイダ\"%s\"が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			u"使用エラー: コマンドが指定されていません"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"ソース・キーストア・ファイルは、存在しますが空です: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			u"-srckeystoreを指定してください"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u"\'list\'コマンドに-vと-rfcの両方を指定することはできません"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"キーのパスワードは6文字以上である必要があります"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			u"新規パスワードは6文字以上である必要があります"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"キーストア・ファイルは存在しますが、空です: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			u"キーストア・ファイルは存在しません: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			u"出力先の別名を指定する必要があります"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			u"別名を指定する必要があります"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			u"キーストアのパスワードは6文字以上である必要があります"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			u"保存するパスワードを入力してください:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			u"キーストアのパスワードを入力してください:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			u"ソース・キーストアのパスワードを入力してください:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			u"出力先キーストアのパスワードを入力してください:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"キーストアのパスワードが短すぎます - 6文字以上にしてください"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			u"不明なエントリ・タイプ"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"別名{0}のエントリのインポートに成功しました。"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"別名{0}のエントリはインポートされませんでした。"_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"別名{0}のエントリのインポート中に問題が発生しました: {1}。\n別名{0}のエントリはインポートされませんでした。"_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"インポート・コマンドが完了しました: {0}件のエントリのインポートが成功しました。{1}件のエントリのインポートが失敗したか取り消されました"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"警告: 出力先キーストア内の既存の別名{0}を上書きしています"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"既存のエントリの別名{0}が存在しています。上書きしますか。[いいえ]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			u"障害が多すぎます - 後で実行してください"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"認証リクエストがファイル<{0}>に保存されました"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			u"これをCAに提出してください"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			u"別名を指定しない場合、出力先キーストアの別名およびソース・キーストアのパスワードは指定できません"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			u"出力先pkcs12キーストアに、異なるstorepassおよびkeypassがあります。-destkeypassを指定して再試行してください。"_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			u"証明書がファイル<{0}>に保存されました"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			u"証明書応答がキーストアにインストールされました"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			u"証明書応答がキーストアにインストールされませんでした"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"証明書がキーストアに追加されました"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"証明書がキーストアに追加されませんでした"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			u"[{0}を格納中]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			u"{0}には公開キー(証明書)がありません"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			u"署名アルゴリズムを取得できません"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			u"別名<{0}>は存在しません"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			u"別名<{0}>には証明書がありません"_s
		}),
		$$new($ObjectArray, {
			"groupname.keysize.coexist"_s,
			u"-groupnameと-keysizeの両方を指定できません"_s
		}),
		$$new($ObjectArray, {
			"deprecate.keysize.for.ec"_s,
			u"-keysizeの指定によるECキーの生成は非推奨です。かわりに\"-groupname %s\"を使用してください。"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			u"キー・ペアは生成されませんでした。別名<{0}>はすでに存在します"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"{3}日間有効な{0}ビットの{1}のキー・ペアと自己署名型証明書({2})を生成しています\n\tディレクトリ名: {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"<{0}>のキー・パスワードを入力してください"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			u"\t(キーストアのパスワードと同じ場合はRETURNを押してください):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"キーのパスワードが短すぎます - 6文字以上を指定してください"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"障害が多すぎます - キーはキーストアに追加されませんでした"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			u"出力先の別名<{0}>はすでに存在します"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"パスワードが短すぎます - 6文字以上を指定してください"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"障害が多すぎます。キー・エントリのクローンは作成されませんでした"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			u"<{0}>のキーのパスワード"_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			u"アイデンティティ・データベースから追加されたエントリはありません"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			u"別名: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			u"作成日: {0,date}"_s
		}),
		$$new($ObjectArray, {
			"alias.keyStore.getCreationDate.alias."_s,
			"{0},{1,date}, "_s
		}),
		$$new($ObjectArray, {
			"alias."_s,
			"{0}, "_s
		}),
		$$new($ObjectArray, {
			"Entry.type.type."_s,
			u"エントリ・タイプ: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			u"証明書チェーンの長さ: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			u"証明書[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			u"証明書のフィンガプリント(SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			u"キーストアのタイプ: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			u"キーストア・プロバイダ: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"キーストアには{0,number,integer}エントリが含まれます"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"キーストアには{0,number,integer}エントリが含まれます"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			u"入力の構文解析に失敗しました"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			u"入力がありません"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			u"X.509証明書ではありません"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			u"{0}には公開キーがありません"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			u"{0}にはX.509証明書がありません"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			u"新しい証明書(自己署名型):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			u"応答には証明書がありません"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			u"証明書はインポートされませんでした。別名<{0}>はすでに存在します"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			u"入力はX.509証明書ではありません"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			u"証明書は、別名<{0}>のキーストアにすでに存在します"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			u"追加しますか。[いいえ]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"証明書は、別名<{0}>のシステム規模のCAキーストア内にすでに存在します"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"キーストアに追加しますか。 [いいえ]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			u"この証明書を信頼しますか。 [いいえ]:  "_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			u"新規{0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			u"パスワードは異なっている必要があります"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			u"新規{0}を再入力してください: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			u"パスワードを再入力してください: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			u"新規パスワードを再入力してください: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"一致しません。もう一度実行してください"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			u"{0}の別名を入力してください:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			u"新しい別名を入力してください\t(このエントリのインポートを取り消す場合はRETURNを押してください):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			u"別名を入力してください:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			u"\t(<{0}>と同じ場合はRETURNを押してください)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			u"姓名は何ですか。"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			u"組織単位名は何ですか。"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			u"組織名は何ですか。"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			u"都市名または地域名は何ですか。"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			u"都道府県名または州名は何ですか。"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"この単位に該当する2文字の国コードは何ですか。"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			u"{0}でよろしいですか。"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			u"いいえ"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			u"はい"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"y"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			u"別名<{0}>にはキーがありません"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"別名<{0}>が参照しているエントリ・タイプは秘密キー・エントリではありません。-keycloneコマンドは秘密キー・エントリのクローン作成のみをサポートします"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			u"署名者番号%d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			u"タイムスタンプ:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			u"署名:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			u"証明書の所有者: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			u"署名付きJARファイルではありません"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			u"SSLサーバーからの証明書がありません"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"*キーストアに保存された情報の整合性は*\n*検証されていません。整合性を検証するには*\n*キーストアのパスワードを入力する必要があります。*"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"*ソース・キーストアに保存された情報の整合性は*\n*検証されていません。整合性を検証するには*\n*ソース・キーストアのパスワードを入力する必要があります。*"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"証明書応答には、<{0}>の公開キーは含まれません"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			u"応答した証明書チェーンは不完全です"_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			u"応答したトップレベルの証明書:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"... は信頼されていません。 "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			u"応答をインストールしますか。[いいえ]:  "_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			u"応答した公開キーとキーストアが一致しません"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			u"証明書応答とキーストア内の証明書が同じです"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			u"応答から連鎖を確立できませんでした"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			u"応答が間違っています。もう一度実行してください"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			u"秘密キーは生成されませんでした。別名<{0}>はすでに存在します"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			u"秘密キーの生成時には -keysizeを指定してください"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"警告: 検証されていません。-keystoreが正しいことを確認してください。"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s,
			u"警告: 検証されていません。-keystoreが正しいことを確認するか、-trustcacertsを指定してください。"_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			u"拡張: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			u"(空の値)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			u"拡張リクエスト:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			u"不明なkeyUsageタイプ: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			u"不明なextendedkeyUsageタイプ: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			u"不明なAccessDescriptionタイプ: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			u"認識されないGeneralNameタイプ: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			u"この拡張はクリティカルとしてマーク付けできません。 "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"奇数の16進数が見つかりました: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			u"不明な拡張タイプ: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			u"コマンド{0}はあいまいです:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			u"証明書リクエスト"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			u"発行者"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			u"生成された証明書"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			u"生成されたCRL"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			u"生成された証明書リクエスト"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			u"証明書"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			u"TSA証明書"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			u"入力"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			u"応答"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d / %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			u"cacerts内の発行者<%s>"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			u"発行者<%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			u"%s (弱)"_s
		}),
		$$new($ObjectArray, {
			"with.disabled"_s,
			u"%s (無効)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			u"%1$dビット%2$sキー"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"%1$dビット%2$sキー(弱)"_s
		}),
		$$new($ObjectArray, {
			"key.bit.disabled"_s,
			u"%1$d-bit %2$s key (無効)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			u"不明なサイズの%sキー"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"所有者: {0}\n発行者: {1}\nシリアル番号: {2}\n有効期間の開始日: {3}終了日: {4}\n証明書のフィンガプリント:\n\t SHA1: {5}\n\t SHA256: {6}\n署名アルゴリズム名: {7}\nサブジェクト公開キー・アルゴリズム: {8}\nバージョン: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			u"PKCS #10証明書リクエスト(バージョン1.0)\nサブジェクト: %1$s\nフォーマット: %2$s\n公開キー: %3$s\n署名アルゴリズム: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			u"%2$s内の%1$sにより%3$sで検証されました"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.disabled"_s,
			u"%1$sは%2$s署名アルゴリズムを使用しており、これはセキュリティ・リスクとみなされ、無効化されています。"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.weak"_s,
			u"%1$sは%2$s署名アルゴリズムを使用しており、これはセキュリティ・リスクとみなされます。このアルゴリズムは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"whose.key.disabled"_s,
			u"%1$sは%2$sを使用しており、これはセキュリティ・リスクとみなされ、無効化されています。"_s
		}),
		$$new($ObjectArray, {
			"whose.key.weak"_s,
			u"%1$sは%2$sを使用しており、これはセキュリティ・リスクとみなされます。このキー・サイズは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"%1$sキーストアは独自の形式を使用しています。\"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"を使用する業界標準の形式であるPKCS12に移行することをお薦めします。"_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			u"\"%1$s\"が%4$sに移行されました。%2$sキーストアは\"%3$s\"としてバックアップされます。"_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"元のキーストア\"%1$s\"は\"%3$s\"としてバックアップされます..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			u"キーストア%1$sを%2$sにインポートしています..."_s
		}),
		$$new($ObjectArray, {
			"keyalg.option.missing.error"_s,
			u"-keyalgオプションを指定する必要があります。"_s
		}),
		$$new($ObjectArray, {
			"showinfo.no.option"_s,
			u"-showinfoのオプションがありません。\"keytool -showinfo -tls\"を試してください。"_s
		})
	}));
}

Resources_ja::Resources_ja() {
}

$Class* Resources_ja::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ja, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_ja",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_ja, name, initialize, &classInfo$$, Resources_ja::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_ja);
	});
	return class$;
}

$Class* Resources_ja::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun