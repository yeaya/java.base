#include <sun/security/util/Resources_ko.h>

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

$FieldInfo _Resources_ko_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ko, contents)},
	{}
};

$MethodInfo _Resources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_ko::*)()>(&Resources_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_ko_FieldInfo_,
	_Resources_ko_MethodInfo_
};

$Object* allocate$Resources_ko($Class* clazz) {
	return $of($alloc(Resources_ko));
}

$ObjectArray2* Resources_ko::contents = nullptr;

void Resources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ko::getContents() {
	return Resources_ko::contents;
}

void clinit$Resources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"\ub110 \uc785\ub825\uac12\uc774 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"\uc791\uc5c5\uc740 \'\uc77d\uae30\' \uc804\uc6a9\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"\uad8c\ud55c \uc774\ub984 [{0}] \uad6c\ubb38\uc774 \ubd80\uc801\ud569\ud568: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"\uc778\uc99d\uc11c \ud074\ub798\uc2a4 \ub2e4\uc74c\uc5d0 \uc8fc\uccb4 \ud074\ub798\uc2a4\uc640 \uc774\ub984\uc774 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"\uc8fc\uccb4 \ud074\ub798\uc2a4 \ub2e4\uc74c\uc5d0 \uc8fc\uccb4 \uc774\ub984\uc774 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"\uc8fc\uccb4 \uc774\ub984\uc740 \ub530\uc634\ud45c\ub85c \ubb36\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"\uc8fc\uccb4 \uc774\ub984\uc5d0 \ub2eb\ub294 \ub530\uc634\ud45c\uac00 \ub204\ub77d\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"\uc8fc\uccb4 \uc774\ub984\uc774 \uc640\uc77c\ub4dc \uce74\ub4dc \ubb38\uc790(*) \uac12\uc774 \uc544\ub2cc \uacbd\uc6b0 PrivateCredentialPermission \uc8fc\uccb4 \ud074\ub798\uc2a4\ub294 \uc640\uc77c\ub4dc \uce74\ub4dc \ubb38\uc790(*) \uac12\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of(u"CredOwner:\n\t\uc8fc\uccb4 \ud074\ub798\uc2a4 = {0}\n\t\uc8fc\uccb4 \uc774\ub984 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"\ub110 \uc774\ub984\uc744 \uc81c\uacf5\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"\ub110 \ud0a4\uc6cc\ub4dc \ub9f5\uc744 \uc81c\uacf5\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of(u"\ub110 OID \ub9f5\uc744 \uc81c\uacf5\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 AccessControlContext\uac00 \uc81c\uacf5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 \uc791\uc5c5\uc774 \uc81c\uacf5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 \ud074\ub798\uc2a4\uac00 \uc81c\uacf5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of(u"\uc81c\ubaa9:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of(u"\\\uc8fc\uccb4: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\t\uacf5\uc6a9 \uc778\uc99d\uc11c: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\t\uc804\uc6a9 \uc778\uc99d\uc11c\uc5d0 \uc561\uc138\uc2a4\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4.\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\t\uc804\uc6a9 \uc778\uc99d\uc11c: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\t\uc804\uc6a9 \uc778\uc99d\uc11c\uc5d0 \uc561\uc138\uc2a4\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"\uc81c\ubaa9\uc774 \uc77d\uae30 \uc804\uc6a9\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"java.security.Principal\uc758 \uc778\uc2a4\ud134\uc2a4\uac00 \uc544\ub2cc \uac1d\uccb4\ub97c \uc81c\ubaa9\uc758 \uc8fc\uccb4 \uc9d1\ud569\uc5d0 \ucd94\uac00\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"{0}\uc758 \uc778\uc2a4\ud134\uc2a4\uac00 \uc544\ub2cc \uac1d\uccb4\ub97c \ucd94\uac00\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 \uc785\ub825\uac12: \uc774\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"{0}\uc5d0 \ub300\ud574 \uad6c\uc131\ub41c LoginModules\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 \uc81c\ubaa9\uc774 \uc81c\uacf5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub110 CallbackHandler\uac00 \uc81c\uacf5\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"\ub110 \uc81c\ubaa9 - \ub85c\uadf8\uc778 \uc804\uc5d0 \ub85c\uadf8\uc544\uc6c3\uc774 \ud638\ucd9c\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"\uc778\uc218\uac00 \uc5c6\ub294 \uc0dd\uc131\uc790\ub97c \uc81c\uacf5\ud558\uc9c0 \uc54a\uc544 LoginModule {0}\uc744(\ub97c) \uc778\uc2a4\ud134\uc2a4\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"LoginModule\uc744 \uc778\uc2a4\ud134\uc2a4\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"LoginModule\uc744 \uc778\uc2a4\ud134\uc2a4\ud654\ud560 \uc218 \uc5c6\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"LoginModule \ud074\ub798\uc2a4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"LoginModule\uc5d0 \uc561\uc138\uc2a4\ud560 \uc218 \uc5c6\uc74c: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"\ub85c\uadf8\uc778 \uc2e4\ud328: \ubaa8\ub4e0 \ubaa8\ub4c8\uc774 \ubb34\uc2dc\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: {0}\uc758 \uad6c\ubb38\uc744 \ubd84\uc11d\ud558\ub294 \uc911 \uc624\ub958 \ubc1c\uc0dd:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: {0} \uad8c\ud55c\uc744 \ucd94\uac00\ud558\ub294 \uc911 \uc624\ub958 \ubc1c\uc0dd:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: \ud56d\ubaa9\uc744 \ucd94\uac00\ud558\ub294 \uc911 \uc624\ub958 \ubc1c\uc0dd:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"\ubcc4\uce6d \uc774\ub984\uc774 \uc81c\uacf5\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4({0})."_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"{0} \ubcc4\uce6d\uc744 \ub300\uccb4\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"\ub300\uccb4 \uac12 {0}\uc740(\ub294) \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
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
			$of(u"\uc720\ud615\uc740 \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uace0 keystorePasswordURL\uc744 \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc720\ud615\uc774 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"\ud0a4 \uc800\uc7a5\uc18c \uc81c\uacf5\uc790\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"Codebase \ud45c\ud604\uc2dd\uc774 \uc5ec\ub7ec \uac1c\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"SignedBy \ud45c\ud604\uc2dd\uc774 \uc5ec\ub7ec \uac1c\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"\uc911\ubcf5\ub41c \ud0a4 \uc800\uc7a5\uc18c \ub3c4\uba54\uc778 \uc774\ub984: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"\uc911\ubcf5\ub41c \ud0a4 \uc800\uc7a5\uc18c \uc774\ub984: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy\uc758 \ubcc4\uce6d\uc774 \ube44\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"\uc640\uc77c\ub4dc \uce74\ub4dc \ubb38\uc790 \uc774\ub984 \uc5c6\uc774 \uc640\uc77c\ub4dc \uce74\ub4dc \ubb38\uc790 \ud074\ub798\uc2a4\ub97c \uc0ac\uc6a9\ud558\ub294 \uc8fc\uccb4\ub97c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"codeBase, SignedBy \ub610\ub294 \uc8fc\uccb4\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"\uad8c\ud55c \ud56d\ubaa9\uc774 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"\uc22b\uc790 "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"[{0}]\uc774(\uac00) \ud544\uc694\ud558\uc9c0\ub9cc [\ud30c\uc77c\uc758 \ub05d]\uae4c\uc9c0 \uc77d\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"[;]\uc774 \ud544\uc694\ud558\uc9c0\ub9cc [\ud30c\uc77c\uc758 \ub05d]\uae4c\uc9c0 \uc77d\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"{0} \ud589: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"{0} \ud589: [{1}]\uc774(\uac00) \ud544\uc694\ud558\uc9c0\ub9cc [{2}]\uc774(\uac00) \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of(u"principalClass \ub610\ub294 principalName\uc774 \ub110\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"PKCS11 \ud1a0\ud070 [{0}] \ube44\ubc00\ubc88\ud638: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"\uc81c\ubaa9 \uae30\ubc18 \uc815\ucc45\uc744 \uc778\uc2a4\ud134\uc2a4\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		})
	}));
}

Resources_ko::Resources_ko() {
}

$Class* Resources_ko::load$($String* name, bool initialize) {
	$loadClass(Resources_ko, name, initialize, &_Resources_ko_ClassInfo_, clinit$Resources_ko, allocate$Resources_ko);
	return class$;
}

$Class* Resources_ko::class$ = nullptr;

		} // util
	} // security
} // sun