#include <sun/security/util/Resources.h>

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

$FieldInfo _Resources_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources, contents)},
	{}
};

$MethodInfo _Resources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Resources, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _Resources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_FieldInfo_,
	_Resources_MethodInfo_
};

$Object* allocate$Resources($Class* clazz) {
	return $of($alloc(Resources));
}

$ObjectArray2* Resources::contents = nullptr;

void Resources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources::getContents() {
	return Resources::contents;
}

void clinit$Resources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of("invalid null input(s)"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of("actions can only be \'read\'"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of("permission name [{0}] syntax invalid: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of("Credential Class not followed by a Principal Class and Name"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of("Principal Class not followed by a Principal Name"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of("Principal Name must be surrounded by quotes"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of("Principal Name missing end quote"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of("PrivateCredentialPermission Principal Class can not be a wildcard (*) value if Principal Name is not a wildcard (*) value"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner:\n\tPrincipal Class = {0}\n\tPrincipal Name = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of("provided null name"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of("provided null keyword map"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("provided null OID map"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of("invalid null AccessControlContext provided"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of("invalid null action provided"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of("invalid null Class provided"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Subject:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of("\tPublic Credential: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of("\tPrivate Credential: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of("\tPrivate Credential inaccessible\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of("Subject is read-only"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of("attempting to add an object which is not an instance of java.security.Principal to a Subject\'s Principal Set"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of("attempting to add an object which is not an instance of {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of("Invalid null input: name"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of("No LoginModules configured for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of("invalid null Subject provided"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of("invalid null CallbackHandler provided"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of("null subject - logout called before login"_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of("Login Failure: all modules ignored"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of("java.security.policy: error parsing {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of("java.security.policy: error adding Permission, {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of("java.security.policy: error adding Entry:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of("alias name not provided ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of("unable to perform substitution on alias, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of("substitution value, {0}, unsupported"_s)
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
			$of("type can\'t be null"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of("keystorePasswordURL can not be specified without also specifying keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of("expected keystore type"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of("expected keystore provider"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of("multiple Codebase expressions"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of("multiple SignedBy expressions"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of("duplicate keystore domain name: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of("duplicate keystore name: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of("SignedBy has empty alias"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of("can not specify Principal with a wildcard class without a wildcard name"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of("expected codeBase or SignedBy or Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of("expected permission entry"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of("number "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of("expected [{0}], read [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of("expected [;], read [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of("line {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of("line {0}: expected [{1}], found [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("null principalClass or principalName"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of("PKCS11 Token [{0}] Password: "_s)
		})
	}));
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$loadClass(Resources, name, initialize, &_Resources_ClassInfo_, clinit$Resources, allocate$Resources);
	return class$;
}

$Class* Resources::class$ = nullptr;

		} // util
	} // security
} // sun