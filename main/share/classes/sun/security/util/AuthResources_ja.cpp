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

$FieldInfo _AuthResources_ja_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_ja, contents)},
	{}
};

$MethodInfo _AuthResources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_ja::*)()>(&AuthResources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_ja_FieldInfo_,
	_AuthResources_ja_MethodInfo_
};

$Object* allocate$AuthResources_ja($Class* clazz) {
	return $of($alloc(AuthResources_ja));
}

$ObjectArray2* AuthResources_ja::contents = nullptr;

void AuthResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_ja::getContents() {
	return AuthResources_ja::contents;
}

void clinit$AuthResources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"無効なnullの入力: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of(u"無効なNTSid値"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [主グループ]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [補助グループ]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of(u"{0}を正しく展開できません"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0}(指定されたファイルまたはディレクトリは存在しません)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"構成エラー:\n\t指定されたファイルまたはディレクトリは存在しません"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"構成エラー:\n\t無効な制御フラグ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"構成エラー:\n\t{0}に複数のエントリを指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"構成エラー:\n\t[{0}]ではなく、[ファイルの終わり]が読み込まれました"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"構成エラー:\n\t行{0}: [{1}]ではなく、[{2}]が検出されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"構成エラー:\n\t行{0}: [{1}]が要求されました"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"構成エラー:\n\t行{0}: システム・プロパティ[{1}]が空の値に展開されました"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"ユーザー名: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"パスワード: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"キーストア情報を入力してください"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"キーストアの別名: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"キーストアのパスワード: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"秘密キーのパスワード(オプション): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberosユーザー名[{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"{0}のKerberosパスワード: "_s)
		})
	}));
}

AuthResources_ja::AuthResources_ja() {
}

$Class* AuthResources_ja::load$($String* name, bool initialize) {
	$loadClass(AuthResources_ja, name, initialize, &_AuthResources_ja_ClassInfo_, clinit$AuthResources_ja, allocate$AuthResources_ja);
	return class$;
}

$Class* AuthResources_ja::class$ = nullptr;

		} // util
	} // security
} // sun