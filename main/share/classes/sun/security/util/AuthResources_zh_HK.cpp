#include <sun/security/util/AuthResources_zh_HK.h>

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

$FieldInfo _AuthResources_zh_HK_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_zh_HK, contents)},
	{}
};

$MethodInfo _AuthResources_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_zh_HK::*)()>(&AuthResources_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_zh_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_zh_HK_FieldInfo_,
	_AuthResources_zh_HK_MethodInfo_
};

$Object* allocate$AuthResources_zh_HK($Class* clazz) {
	return $of($alloc(AuthResources_zh_HK));
}

$ObjectArray2* AuthResources_zh_HK::contents = nullptr;

void AuthResources_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_zh_HK::getContents() {
	return AuthResources_zh_HK::contents;
}

void clinit$AuthResources_zh_HK($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_zh_HK::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"\u7121\u6548\u7a7a\u503c\u8f38\u5165: {0}"_s)
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
			$of(u"\u7121\u6548 NTSid \u503c"_s)
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
			$of(u"UnixNumericGroupPrincipal [\u4e3b\u7fa4\u7d44]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [\u9644\u52a0\u7fa4\u7d44]: {0}"_s)
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
			$of(u"\u7121\u6cd5\u9069\u7576\u5730\u64f4\u5145 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0} (\u6c92\u6709\u6b64\u6a94\u6848\u6216\u76ee\u9304)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"\u7d44\u614b\u932f\u8aa4:\n\t\u7121\u6b64\u6a94\u6848\u6216\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"\u7d44\u614b\u932f\u8aa4:\n\t\u7121\u6548\u7684\u63a7\u5236\u65d7\u6a19\uff0c{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"\u7d44\u614b\u932f\u8aa4: \n\t\u7121\u6cd5\u6307\u5b9a\u591a\u91cd\u9805\u76ee {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"\u7d44\u614b\u932f\u8aa4: \n\t\u9810\u671f\u7684 [{0}], \u8b80\u53d6 [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"\u7d44\u614b\u932f\u8aa4: \n\t\u884c {0}: \u9810\u671f\u7684 [{1}], \u767c\u73fe [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"\u7d44\u614b\u932f\u8aa4: \n\t\u884c {0}: \u9810\u671f\u7684 [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"\u7d44\u614b\u932f\u8aa4: \n\t\u884c {0}: \u7cfb\u7d71\u5c6c\u6027 [{1}] \u64f4\u5145\u81f3\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"\u4f7f\u7528\u8005\u540d\u7a31: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"\u5bc6\u78bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"\u8acb\u8f38\u5165\u91d1\u9470\u5132\u5b58\u5eab\u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u5225\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"\u91d1\u9470\u5132\u5b58\u5eab\u5bc6\u78bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"\u79c1\u4eba\u91d1\u9470\u5bc6\u78bc (\u9078\u64c7\u6027\u7684): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos \u4f7f\u7528\u8005\u540d\u7a31 [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"Kerberos \u5bc6\u78bc {0}: "_s)
		})
	}));
}

AuthResources_zh_HK::AuthResources_zh_HK() {
}

$Class* AuthResources_zh_HK::load$($String* name, bool initialize) {
	$loadClass(AuthResources_zh_HK, name, initialize, &_AuthResources_zh_HK_ClassInfo_, clinit$AuthResources_zh_HK, allocate$AuthResources_zh_HK);
	return class$;
}

$Class* AuthResources_zh_HK::class$ = nullptr;

		} // util
	} // security
} // sun