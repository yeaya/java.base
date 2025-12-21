#include <sun/security/util/Resources_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace util {

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
	"sun.security.util.Resources_ja",
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
			$of("invalid.null.input.s."_s),
			$of(u"nullの入力は無効です"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"アクションは\'読込み\'のみ可能です"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"アクセス権名[{0}]の構文が無効です: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"Credentialクラスの次にPrincipalクラスおよび名前がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"Principalクラスの次にプリンシパル名がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"プリンシパル名は引用符で囲む必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"プリンシパル名の最後に引用符がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"プリンシパル名がワイルドカード(*)値でない場合、PrivateCredentialPermissionのPrincipalクラスをワイルドカード(*)値にすることはできません"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of(u"CredOwner:\n\tPrincipalクラス={0}\n\tプリンシパル名={1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"nullの名前が指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"nullのキーワード・マップが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of(u"nullのOIDマップが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"無効なnull AccessControlContextが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"無効なnullアクションが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"無効なnullクラスが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of(u"サブジェクト:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of(u"\tプリンシパル: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\t公開資格: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\t非公開資格にはアクセスできません\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\t非公開資格: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\t非公開資格にはアクセスできません\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"サブジェクトは読取り専用です"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"java.security.Principalのインスタンスではないオブジェクトを、サブジェクトのプリンシパル・セットに追加しようとしました"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"{0}のインスタンスではないオブジェクトを追加しようとしました"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"無効なnull入力: 名前"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"{0}用に構成されたLoginModulesはありません"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"無効なnullサブジェクトが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"無効なnull CallbackHandlerが指定されました"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"nullサブジェクト - ログインする前にログアウトが呼び出されました"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"LoginModule {0}は引数を取らないコンストラクタを指定できないため、インスタンスを生成できません"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"LoginModuleのインスタンスを生成できません"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"LoginModuleのインスタンスを生成できません: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"LoginModuleクラスを検出できません: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"LoginModuleにアクセスできません: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"ログイン失敗: すべてのモジュールは無視されます"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: {0}の構文解析エラー:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: アクセス権{0}の追加エラー:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: エントリの追加エラー:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"別名の指定がありません({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"別名{0}に対して置換操作ができません"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"置換値{0}はサポートされていません"_s)
		}),
		$$new($ObjectArray, {
			$of("SPACE"_s),
			$of(" "_s)
		}),
		$$new($ObjectArray, {
			$of("LPARAM"_s),
			$of("("_s)
		}),
		$$new($ObjectArray, {
			$of("RPARAM"_s),
			$of(")"_s)
		}),
		$$new($ObjectArray, {
			$of("type.can.t.be.null"_s),
			$of(u"入力をnullにすることはできません"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"キーストアを指定しない場合、keystorePasswordURLは指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"予想されたキーストア・タイプ"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"予想されたキーストア・プロバイダ"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"複数のCodebase式"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"複数のSignedBy式"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"重複するキーストア・ドメイン名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"重複するキーストア名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedByは空の別名を保持します"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"ワイルドカード名のないワイルドカード・クラスを使用して、プリンシパルを指定することはできません"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"予想されたcodeBase、SignedByまたはPrincipal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"予想されたアクセス権エントリ"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"数 "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"[{0}]ではなく[ファイルの終わり]が読み込まれました"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"[;]ではなく[ファイルの終わり]が読み込まれました"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"行{0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"行{0}: [{1}]ではなく[{2}]が検出されました"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of(u"nullのprincipalClassまたはprincipalName"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"PKCS11トークン[{0}]パスワード: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"サブジェクト・ベースのポリシーのインスタンスを生成できません"_s)
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

		} // util
	} // security
} // sun