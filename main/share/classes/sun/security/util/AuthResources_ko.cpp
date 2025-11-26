#include <sun/security/util/AuthResources_ko.h>

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

$FieldInfo _AuthResources_ko_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_ko, contents)},
	{}
};

$MethodInfo _AuthResources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_ko::*)()>(&AuthResources_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_ko_FieldInfo_,
	_AuthResources_ko_MethodInfo_
};

$Object* allocate$AuthResources_ko($Class* clazz) {
	return $of($alloc(AuthResources_ko));
}

$ObjectArray2* AuthResources_ko::contents = nullptr;

void AuthResources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_ko::getContents() {
	return AuthResources_ko::contents;
}

void clinit$AuthResources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 \uc785\ub825: {0}"_s)
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
			$of(u"NTSid \uac12\uc774 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
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
			$of(u"UnixNumericGroupPrincipal [\uae30\ubcf8 \uadf8\ub8f9]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [\ubcf4\uc870 \uadf8\ub8f9]: {0}"_s)
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
			$of(u"{0}\uc744(\ub97c) \uc81c\ub300\ub85c \ud655\uc7a5\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0}(\ud574\ub2f9 \ud30c\uc77c \ub610\ub294 \ub514\ub809\ud1a0\ub9ac\uac00 \uc5c6\uc2b5\ub2c8\ub2e4.)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t\ud574\ub2f9 \ud30c\uc77c \ub610\ub294 \ub514\ub809\ud1a0\ub9ac\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t\uc81c\uc5b4 \ud50c\ub798\uadf8\uac00 \ubd80\uc801\ud569\ud568, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t{0}\uc5d0 \ub300\ud574 \uc5ec\ub7ec \ud56d\ubaa9\uc744 \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t[{0}]\uc774(\uac00) \ud544\uc694\ud558\uc9c0\ub9cc [\ud30c\uc77c\uc758 \ub05d]\uc5d0 \ub3c4\ub2ec\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t{0} \ud589: [{1}]\uc774(\uac00) \ud544\uc694\ud558\uc9c0\ub9cc [{2}]\uc774(\uac00) \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t{0} \ud589: [{1}]\uc774(\uac00) \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"\uad6c\uc131 \uc624\ub958:\n\t{0} \ud589: \uc2dc\uc2a4\ud15c \uc18d\uc131 [{1}]\uc774(\uac00) \ube48 \uac12\uc73c\ub85c \ud655\uc7a5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"\uc0ac\uc6a9\uc790 \uc774\ub984: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"\ube44\ubc00\ubc88\ud638: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc815\ubcf4\ub97c \uc785\ub825\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ubcc4\uce6d: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \ube44\ubc00\ubc88\ud638: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"\uc804\uc6a9 \ud0a4 \ube44\ubc00\ubc88\ud638(\uc120\ud0dd\uc0ac\ud56d): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos \uc0ac\uc6a9\uc790 \uc774\ub984 [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"{0}\uc758 Kerberos \ube44\ubc00\ubc88\ud638: "_s)
		})
	}));
}

AuthResources_ko::AuthResources_ko() {
}

$Class* AuthResources_ko::load$($String* name, bool initialize) {
	$loadClass(AuthResources_ko, name, initialize, &_AuthResources_ko_ClassInfo_, clinit$AuthResources_ko, allocate$AuthResources_ko);
	return class$;
}

$Class* AuthResources_ko::class$ = nullptr;

		} // util
	} // security
} // sun