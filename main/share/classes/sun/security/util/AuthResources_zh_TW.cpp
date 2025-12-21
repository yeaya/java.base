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

$FieldInfo _AuthResources_zh_TW_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_zh_TW, contents)},
	{}
};

$MethodInfo _AuthResources_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_zh_TW::*)()>(&AuthResources_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_zh_TW_FieldInfo_,
	_AuthResources_zh_TW_MethodInfo_
};

$Object* allocate$AuthResources_zh_TW($Class* clazz) {
	return $of($alloc(AuthResources_zh_TW));
}

$ObjectArray2* AuthResources_zh_TW::contents = nullptr;

void AuthResources_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_zh_TW::getContents() {
	return AuthResources_zh_TW::contents;
}

void clinit$AuthResources_zh_TW($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_zh_TW::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"無效空值輸入: {0}"_s)
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
			$of(u"無效 NTSid 值"_s)
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
			$of(u"UnixNumericGroupPrincipal [主群組]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [附加群組]: {0}"_s)
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
			$of(u"無法適當地擴充 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0} (沒有此檔案或目錄)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"組態錯誤:\n\t無此檔案或目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"組態錯誤:\n\t無效的控制旗標，{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"組態錯誤: \n\t無法指定多重項目 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"組態錯誤: \n\t預期的 [{0}], 讀取 [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"組態錯誤: \n\t行 {0}: 預期的 [{1}], 發現 [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"組態錯誤: \n\t行 {0}: 預期的 [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"組態錯誤: \n\t行 {0}: 系統屬性 [{1}] 擴充至空值"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"使用者名稱: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"密碼: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"請輸入金鑰儲存庫資訊"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"金鑰儲存庫別名: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"金鑰儲存庫密碼: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"私人金鑰密碼 (選擇性的): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos 使用者名稱 [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"Kerberos 密碼 {0}: "_s)
		})
	}));
}

AuthResources_zh_TW::AuthResources_zh_TW() {
}

$Class* AuthResources_zh_TW::load$($String* name, bool initialize) {
	$loadClass(AuthResources_zh_TW, name, initialize, &_AuthResources_zh_TW_ClassInfo_, clinit$AuthResources_zh_TW, allocate$AuthResources_zh_TW);
	return class$;
}

$Class* AuthResources_zh_TW::class$ = nullptr;

		} // util
	} // security
} // sun