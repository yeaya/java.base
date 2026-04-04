#include <sun/security/util/AuthResources_ja.h>
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

$ObjectArray2* AuthResources_ja::contents = nullptr;

void AuthResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_ja::getContents() {
	return AuthResources_ja::contents;
}

void AuthResources_ja::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"無効なnullの入力: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTDomainPrincipal.name"_s,
			"NTDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTNumericCredential.name"_s,
			"NTNumericCredential: {0}"_s
		}),
		$$new($ObjectArray, {
			"Invalid.NTSid.value"_s,
			u"無効なNTSid値"_s
		}),
		$$new($ObjectArray, {
			"NTSid.name"_s,
			"NTSid: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidDomainPrincipal.name"_s,
			"NTSidDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidGroupPrincipal.name"_s,
			"NTSidGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidPrimaryGroupPrincipal.name"_s,
			"NTSidPrimaryGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidUserPrincipal.name"_s,
			"NTSidUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTUserPrincipal.name"_s,
			"NTUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Primary.Group.name"_s,
			u"UnixNumericGroupPrincipal [主グループ]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			u"UnixNumericGroupPrincipal [補助グループ]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericUserPrincipal.name"_s,
			"UnixNumericUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixPrincipal.name"_s,
			"UnixPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"Unable.to.properly.expand.config"_s,
			u"{0}を正しく展開できません"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0}(指定されたファイルまたはディレクトリは存在しません)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"構成エラー:\n\t指定されたファイルまたはディレクトリは存在しません"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"構成エラー:\n\t無効な制御フラグ: {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"構成エラー:\n\t{0}に複数のエントリを指定できません"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"構成エラー:\n\t[{0}]ではなく、[ファイルの終わり]が読み込まれました"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"構成エラー:\n\t行{0}: [{1}]ではなく、[{2}]が検出されました"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"構成エラー:\n\t行{0}: [{1}]が要求されました"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"構成エラー:\n\t行{0}: システム・プロパティ[{1}]が空の値に展開されました"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			u"ユーザー名: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			u"パスワード: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"キーストア情報を入力してください"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			u"キーストアの別名: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"キーストアのパスワード: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"秘密キーのパスワード(オプション): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			u"Kerberosユーザー名[{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"{0}のKerberosパスワード: "_s
		})
	}));
}

AuthResources_ja::AuthResources_ja() {
}

$Class* AuthResources_ja::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_ja, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_ja",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_ja, name, initialize, &classInfo$$, AuthResources_ja::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_ja);
	});
	return class$;
}

$Class* AuthResources_ja::class$ = nullptr;

		} // util
	} // security
} // sun