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
			"invalid.null.input.s."_s,
			u"nullの入力は無効です"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"アクションは\'読込み\'のみ可能です"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"アクセス権名[{0}]の構文が無効です: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"Credentialクラスの次にPrincipalクラスおよび名前がありません"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"Principalクラスの次にプリンシパル名がありません"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"プリンシパル名は引用符で囲む必要があります"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			u"プリンシパル名の最後に引用符がありません"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"プリンシパル名がワイルドカード(*)値でない場合、PrivateCredentialPermissionのPrincipalクラスをワイルドカード(*)値にすることはできません"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			u"CredOwner:\n\tPrincipalクラス={0}\n\tプリンシパル名={1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			u"nullの名前が指定されました"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			u"nullのキーワード・マップが指定されました"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			u"nullのOIDマップが指定されました"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"無効なnull AccessControlContextが指定されました"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"無効なnullアクションが指定されました"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"無効なnullクラスが指定されました"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			u"サブジェクト:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			u"\tプリンシパル: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\t公開資格: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\t非公開資格にはアクセスできません\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			u"\t非公開資格: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\t非公開資格にはアクセスできません\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"サブジェクトは読取り専用です"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"java.security.Principalのインスタンスではないオブジェクトを、サブジェクトのプリンシパル・セットに追加しようとしました"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"{0}のインスタンスではないオブジェクトを追加しようとしました"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"無効なnull入力: 名前"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"{0}用に構成されたLoginModulesはありません"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"無効なnullサブジェクトが指定されました"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"無効なnull CallbackHandlerが指定されました"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"nullサブジェクト - ログインする前にログアウトが呼び出されました"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			u"LoginModule {0}は引数を取らないコンストラクタを指定できないため、インスタンスを生成できません"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			u"LoginModuleのインスタンスを生成できません"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			u"LoginModuleのインスタンスを生成できません: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			u"LoginModuleクラスを検出できません: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"LoginModuleにアクセスできません: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"ログイン失敗: すべてのモジュールは無視されます"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			u"java.security.policy: {0}の構文解析エラー:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: アクセス権{0}の追加エラー:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy: エントリの追加エラー:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			u"別名の指定がありません({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"別名{0}に対して置換操作ができません"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"置換値{0}はサポートされていません"_s
		}),
		$$new($ObjectArray, {
			"SPACE"_s,
			" "_s
		}),
		$$new($ObjectArray, {
			"LPARAM"_s,
			"("_s
		}),
		$$new($ObjectArray, {
			"RPARAM"_s,
			")"_s
		}),
		$$new($ObjectArray, {
			"type.can.t.be.null"_s,
			u"入力をnullにすることはできません"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"キーストアを指定しない場合、keystorePasswordURLは指定できません"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"予想されたキーストア・タイプ"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"予想されたキーストア・プロバイダ"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"複数のCodebase式"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"複数のSignedBy式"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"重複するキーストア・ドメイン名: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"重複するキーストア名: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			u"SignedByは空の別名を保持します"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"ワイルドカード名のないワイルドカード・クラスを使用して、プリンシパルを指定することはできません"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			u"予想されたcodeBase、SignedByまたはPrincipal"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"予想されたアクセス権エントリ"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			u"数 "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			u"[{0}]ではなく[ファイルの終わり]が読み込まれました"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			u"[;]ではなく[ファイルの終わり]が読み込まれました"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			u"行{0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"行{0}: [{1}]ではなく[{2}]が検出されました"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			u"nullのprincipalClassまたはprincipalName"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"PKCS11トークン[{0}]パスワード: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"サブジェクト・ベースのポリシーのインスタンスを生成できません"_s
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
		"sun.security.util.Resources_ja",
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

		} // util
	} // security
} // sun