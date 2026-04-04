#include <sun/security/util/AuthResources_zh_TW.h>
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

$ObjectArray2* AuthResources_zh_TW::contents = nullptr;

void AuthResources_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_zh_TW::getContents() {
	return AuthResources_zh_TW::contents;
}

void AuthResources_zh_TW::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_zh_TW::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"無效空值輸入: {0}"_s
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
			u"無效 NTSid 值"_s
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
			u"UnixNumericGroupPrincipal [主群組]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			u"UnixNumericGroupPrincipal [附加群組]: {0}"_s
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
			u"無法適當地擴充 {0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0} (沒有此檔案或目錄)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"組態錯誤:\n\t無此檔案或目錄"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"組態錯誤:\n\t無效的控制旗標，{0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"組態錯誤: \n\t無法指定多重項目 {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"組態錯誤: \n\t預期的 [{0}], 讀取 [end of file]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"組態錯誤: \n\t行 {0}: 預期的 [{1}], 發現 [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"組態錯誤: \n\t行 {0}: 預期的 [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"組態錯誤: \n\t行 {0}: 系統屬性 [{1}] 擴充至空值"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			u"使用者名稱: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			u"密碼: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"請輸入金鑰儲存庫資訊"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			u"金鑰儲存庫別名: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"金鑰儲存庫密碼: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"私人金鑰密碼 (選擇性的): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			u"Kerberos 使用者名稱 [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"Kerberos 密碼 {0}: "_s
		})
	}));
}

AuthResources_zh_TW::AuthResources_zh_TW() {
}

$Class* AuthResources_zh_TW::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_zh_TW, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_zh_TW",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_zh_TW, name, initialize, &classInfo$$, AuthResources_zh_TW::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_zh_TW);
	});
	return class$;
}

$Class* AuthResources_zh_TW::class$ = nullptr;

		} // util
	} // security
} // sun