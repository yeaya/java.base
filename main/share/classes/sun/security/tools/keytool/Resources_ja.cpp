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

$FieldInfo _Resources_ja_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ja, contents)},
	{}
};

$MethodInfo _Resources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_ja::*)()>(&Resources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_ja_FieldInfo_,
	_Resources_ja_MethodInfo_
};

$Object* allocate$Resources_ja($Class* clazz) {
	return $of($alloc(Resources_ja));
}

$ObjectArray2* Resources_ja::contents = nullptr;

void Resources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ja::getContents() {
	return Resources_ja::contents;
}

void clinit$Resources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("STAR"_s),
			$of("*******************************************"_s)
		}),
		$$new($ObjectArray, {
			$of("STARNN"_s),
			$of("*******************************************\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".OPTION."_s),
			$of(" [OPTION]..."_s)
		}),
		$$new($ObjectArray, {
			$of("Options."_s),
			$of(u"オプション:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"%sオプションが複数回指定されています。最後のもの以外はすべて無視されます。"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"1つのコマンドのみ許可されます: %1$sと%2$sの両方が指定されました。"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"このヘルプ・メッセージを表示するには\"keytool -?、-hまたは--help\"を使用します"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"キーおよび証明書管理ツール"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of(u"コマンド:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"command_nameの使用方法については、\"keytool -command_name --help\"を使用します。\n事前構成済のオプション・ファイルを指定するには、-conf <url>オプションを使用します。"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"証明書リクエストを生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"エントリの別名を変更します"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"エントリを削除します"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of(u"証明書をエクスポートします"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"キー・ペアを生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"秘密キーを生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"証明書リクエストから証明書を生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"CRLを生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"{0}秘密キーを生成しました"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"{0}ビット{1}秘密キーを生成しました"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"JDK 1.1.x-styleアイデンティティ・データベースからエントリをインポートします"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"証明書または証明書チェーンをインポートします"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"パスワードをインポートします"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"別のキーストアから1つまたはすべてのエントリをインポートします"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"キー・エントリのクローンを作成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"エントリのキー・パスワードを変更します"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"キーストア内のエントリをリストします"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"証明書の内容を出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"証明書リクエストの内容を出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"CRLファイルの内容を出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"自己署名型証明書を生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"キーストアのストア・パスワードを変更します"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.command.help"_s),
			$of(u"セキュリティ関連情報を表示します"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"処理するエントリの別名"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.option.help"_s),
			$of(u"グループ名。たとえば、楕円曲線名です。"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of(u"出力先の別名"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"出力先キーのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"出力先キーストア名"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"出力先キーストアの保護対象パスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"出力先キーストア・プロバイダ名"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"出力先キーストアのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"出力先キーストアのタイプ"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of(u"識別名"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"X.509拡張"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"出力ファイル名"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"入力ファイル名"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"キー・アルゴリズム名"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"キーのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"キーのビット・サイズ"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"キーストア名"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"cacertsキーストアにアクセスする"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"警告: cacertsキーストアにアクセスするには-cacertsオプションを使用してください"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"新規パスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"プロンプトを表示しない"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"保護メカニズムによるパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("tls.option.help"_s),
			$of(u"TLS構成情報を表示します"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"名前でセキュリティ・プロバイダを追加する(SunPKCS11など)\n-addproviderの引数を構成する"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"完全修飾クラス名でセキュリティ・プロバイダを追加する\n-providerclassの引数を構成する"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of(u"プロバイダ名"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of(u"プロバイダ・クラスパス"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"RFCスタイルの出力"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of(u"署名アルゴリズム名"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of(u"ソース別名"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"ソース・キーのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"ソース・キーストア名"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"ソース・キーストアの保護対象パスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"ソース・キーストア・プロバイダ名"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"ソース・キーストアのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"ソース・キーストアのタイプ"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"SSLサーバーのホストとポート"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"署名付きJARファイル"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"証明書の有効開始日時"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"キーストアのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"キーストアのタイプ"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"cacertsからの証明書を信頼する"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"詳細出力"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"妥当性日数"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"失効する証明書のシリアルID"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of(u"keytoolエラー: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"不正なオプション:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"不正な値: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"不明なパスワード・タイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"環境変数が見つかりません: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"ファイルが見つかりません: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"コマンド・オプション{0}には引数が必要です。"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"警告: PKCS12キーストアでは、ストアのパスワードとキーのパスワードが異なる状況はサポートされません。ユーザーが指定した{0}の値は無視します。"_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"-keystoreまたは-storetypeオプションは、-cacertsオプションとともに使用できません"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-storetypeが{0}の場合、-keystoreはNONEである必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"再試行が多すぎます。プログラムが終了しました"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"-storetypeが{0}の場合、-storepasswdコマンドおよび-keypasswdコマンドはサポートされません"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"-storetypeがPKCS12の場合、-keypasswdコマンドはサポートされません"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-storetypeが{0}の場合、-keypassと-newは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"-protectedが指定されている場合、-storepass、-keypassおよび-newは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"-srcprotectedが指定されている場合、-srcstorepassおよび-srckeypassは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"キーストアがパスワードで保護されていない場合、-storepass、-keypassおよび-newは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"ソース・キーストアがパスワードで保護されていない場合、-srcstorepassおよび-srckeypassは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"startdate値が無効です"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"妥当性はゼロより大きい必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%sはプロバイダではありません"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"プロバイダ名\"%s\"が見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"プロバイダ\"%s\"が見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"使用エラー: コマンドが指定されていません"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"ソース・キーストア・ファイルは、存在しますが空です: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of(u"-srckeystoreを指定してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"\'list\'コマンドに-vと-rfcの両方を指定することはできません"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"キーのパスワードは6文字以上である必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"新規パスワードは6文字以上である必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"キーストア・ファイルは存在しますが、空です: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"キーストア・ファイルは存在しません: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"出力先の別名を指定する必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"別名を指定する必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"キーストアのパスワードは6文字以上である必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"保存するパスワードを入力してください:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"キーストアのパスワードを入力してください:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"ソース・キーストアのパスワードを入力してください:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"出力先キーストアのパスワードを入力してください:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"キーストアのパスワードが短すぎます - 6文字以上にしてください"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"不明なエントリ・タイプ"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"別名{0}のエントリのインポートに成功しました。"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"別名{0}のエントリはインポートされませんでした。"_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"別名{0}のエントリのインポート中に問題が発生しました: {1}。\n別名{0}のエントリはインポートされませんでした。"_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"インポート・コマンドが完了しました: {0}件のエントリのインポートが成功しました。{1}件のエントリのインポートが失敗したか取り消されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"警告: 出力先キーストア内の既存の別名{0}を上書きしています"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"既存のエントリの別名{0}が存在しています。上書きしますか。[いいえ]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"障害が多すぎます - 後で実行してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"認証リクエストがファイル<{0}>に保存されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"これをCAに提出してください"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"別名を指定しない場合、出力先キーストアの別名およびソース・キーストアのパスワードは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"出力先pkcs12キーストアに、異なるstorepassおよびkeypassがあります。-destkeypassを指定して再試行してください。"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"証明書がファイル<{0}>に保存されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"証明書応答がキーストアにインストールされました"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"証明書応答がキーストアにインストールされませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"証明書がキーストアに追加されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"証明書がキーストアに追加されませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of(u"[{0}を格納中]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0}には公開キー(証明書)がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"署名アルゴリズムを取得できません"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"別名<{0}>は存在しません"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"別名<{0}>には証明書がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.keysize.coexist"_s),
			$of(u"-groupnameと-keysizeの両方を指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("deprecate.keysize.for.ec"_s),
			$of(u"-keysizeの指定によるECキーの生成は非推奨です。かわりに\"-groupname %s\"を使用してください。"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"キー・ペアは生成されませんでした。別名<{0}>はすでに存在します"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"{3}日間有効な{0}ビットの{1}のキー・ペアと自己署名型証明書({2})を生成しています\n\tディレクトリ名: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"<{0}>のキー・パスワードを入力してください"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(キーストアのパスワードと同じ場合はRETURNを押してください):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"キーのパスワードが短すぎます - 6文字以上を指定してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"障害が多すぎます - キーはキーストアに追加されませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"出力先の別名<{0}>はすでに存在します"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"パスワードが短すぎます - 6文字以上を指定してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"障害が多すぎます。キー・エントリのクローンは作成されませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"<{0}>のキーのパスワード"_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"アイデンティティ・データベースから追加されたエントリはありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of(u"別名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"作成日: {0,date}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.keyStore.getCreationDate.alias."_s),
			$of("{0},{1,date}, "_s)
		}),
		$$new($ObjectArray, {
			$of("alias."_s),
			$of("{0}, "_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.type.type."_s),
			$of(u"エントリ・タイプ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"証明書チェーンの長さ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of(u"証明書[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of(u"証明書のフィンガプリント(SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"キーストアのタイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"キーストア・プロバイダ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"キーストアには{0,number,integer}エントリが含まれます"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"キーストアには{0,number,integer}エントリが含まれます"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"入力の構文解析に失敗しました"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"入力がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"X.509証明書ではありません"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0}には公開キーがありません"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0}にはX.509証明書がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"新しい証明書(自己署名型):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"応答には証明書がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"証明書はインポートされませんでした。別名<{0}>はすでに存在します"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"入力はX.509証明書ではありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"証明書は、別名<{0}>のキーストアにすでに存在します"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"追加しますか。[いいえ]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"証明書は、別名<{0}>のシステム規模のCAキーストア内にすでに存在します"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"キーストアに追加しますか。 [いいえ]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"この証明書を信頼しますか。 [いいえ]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of(u"新規{0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"パスワードは異なっている必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of(u"新規{0}を再入力してください: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"パスワードを再入力してください: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"新規パスワードを再入力してください: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"一致しません。もう一度実行してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of(u"{0}の別名を入力してください:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"新しい別名を入力してください\t(このエントリのインポートを取り消す場合はRETURNを押してください):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of(u"別名を入力してください:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(<{0}>と同じ場合はRETURNを押してください)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"姓名は何ですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"組織単位名は何ですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"組織名は何ですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"都市名または地域名は何ですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"都道府県名または州名は何ですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"この単位に該当する2文字の国コードは何ですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0}でよろしいですか。"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"いいえ"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"はい"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("y"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of(u"別名<{0}>にはキーがありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"別名<{0}>が参照しているエントリ・タイプは秘密キー・エントリではありません。-keycloneコマンドは秘密キー・エントリのクローン作成のみをサポートします"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"署名者番号%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of(u"タイムスタンプ:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of(u"署名:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"証明書の所有者: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"署名付きJARファイルではありません"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"SSLサーバーからの証明書がありません"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"*キーストアに保存された情報の整合性は*\n*検証されていません。整合性を検証するには*\n*キーストアのパスワードを入力する必要があります。*"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"*ソース・キーストアに保存された情報の整合性は*\n*検証されていません。整合性を検証するには*\n*ソース・キーストアのパスワードを入力する必要があります。*"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"証明書応答には、<{0}>の公開キーは含まれません"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"応答した証明書チェーンは不完全です"_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"応答したトップレベルの証明書:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... は信頼されていません。 "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"応答をインストールしますか。[いいえ]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"応答した公開キーとキーストアが一致しません"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"証明書応答とキーストア内の証明書が同じです"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"応答から連鎖を確立できませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"応答が間違っています。もう一度実行してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"秘密キーは生成されませんでした。別名<{0}>はすでに存在します"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"秘密キーの生成時には -keysizeを指定してください"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"警告: 検証されていません。-keystoreが正しいことを確認してください。"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s),
			$of(u"警告: 検証されていません。-keystoreが正しいことを確認するか、-trustcacertsを指定してください。"_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"拡張: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(空の値)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"拡張リクエスト:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of(u"不明なkeyUsageタイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of(u"不明なextendedkeyUsageタイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"不明なAccessDescriptionタイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"認識されないGeneralNameタイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"この拡張はクリティカルとしてマーク付けできません。 "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"奇数の16進数が見つかりました: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"不明な拡張タイプ: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"コマンド{0}はあいまいです:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"証明書リクエスト"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of(u"発行者"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"生成された証明書"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"生成されたCRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"生成された証明書リクエスト"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of(u"証明書"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of(u"TSA証明書"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"入力"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"応答"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d / %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of(u"cacerts内の発行者<%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of(u"発行者<%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s (無効)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%1$dビット%2$sキー"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%1$dビット%2$sキー(弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%1$d-bit %2$s key (無効)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"不明なサイズの%sキー"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"所有者: {0}\n発行者: {1}\nシリアル番号: {2}\n有効期間の開始日: {3}終了日: {4}\n証明書のフィンガプリント:\n\t SHA1: {5}\n\t SHA256: {6}\n署名アルゴリズム名: {7}\nサブジェクト公開キー・アルゴリズム: {8}\nバージョン: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"PKCS #10証明書リクエスト(バージョン1.0)\nサブジェクト: %1$s\nフォーマット: %2$s\n公開キー: %3$s\n署名アルゴリズム: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"%2$s内の%1$sにより%3$sで検証されました"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.disabled"_s),
			$of(u"%1$sは%2$s署名アルゴリズムを使用しており、これはセキュリティ・リスクとみなされ、無効化されています。"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.weak"_s),
			$of(u"%1$sは%2$s署名アルゴリズムを使用しており、これはセキュリティ・リスクとみなされます。このアルゴリズムは将来の更新で無効化されます。"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.disabled"_s),
			$of(u"%1$sは%2$sを使用しており、これはセキュリティ・リスクとみなされ、無効化されています。"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.weak"_s),
			$of(u"%1$sは%2$sを使用しており、これはセキュリティ・リスクとみなされます。このキー・サイズは将来の更新で無効化されます。"_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"%1$sキーストアは独自の形式を使用しています。\"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"を使用する業界標準の形式であるPKCS12に移行することをお薦めします。"_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"\"%1$s\"が%4$sに移行されました。%2$sキーストアは\"%3$s\"としてバックアップされます。"_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"元のキーストア\"%1$s\"は\"%3$s\"としてバックアップされます..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"キーストア%1$sを%2$sにインポートしています..."_s)
		}),
		$$new($ObjectArray, {
			$of("keyalg.option.missing.error"_s),
			$of(u"-keyalgオプションを指定する必要があります。"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.no.option"_s),
			$of(u"-showinfoのオプションがありません。\"keytool -showinfo -tls\"を試してください。"_s)
		})
	}));
}

Resources_ja::Resources_ja() {
}

$Class* Resources_ja::load$($String* name, bool initialize) {
	$loadClass(Resources_ja, name, initialize, &_Resources_ja_ClassInfo_, clinit$Resources_ja, allocate$Resources_ja);
	return class$;
}

$Class* Resources_ja::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun