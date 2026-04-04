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

$ObjectArray2* Resources::contents = nullptr;

void Resources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources::getContents() {
	return Resources::contents;
}

void Resources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			"invalid null input(s)"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			"actions can only be \'read\'"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			"permission name [{0}] syntax invalid: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			"Credential Class not followed by a Principal Class and Name"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			"Principal Class not followed by a Principal Name"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			"Principal Name must be surrounded by quotes"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			"Principal Name missing end quote"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			"PrivateCredentialPermission Principal Class can not be a wildcard (*) value if Principal Name is not a wildcard (*) value"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner:\n\tPrincipal Class = {0}\n\tPrincipal Name = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			"provided null name"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			"provided null keyword map"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"provided null OID map"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			"invalid null AccessControlContext provided"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			"invalid null action provided"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			"invalid null Class provided"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Subject:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			"\tPublic Credential: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			"\tPrivate Credential: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			"\tPrivate Credential inaccessible\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			"Subject is read-only"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			"attempting to add an object which is not an instance of java.security.Principal to a Subject\'s Principal Set"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			"attempting to add an object which is not an instance of {0}"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			"Invalid null input: name"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			"No LoginModules configured for {0}"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			"invalid null Subject provided"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			"invalid null CallbackHandler provided"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			"null subject - logout called before login"_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			"Login Failure: all modules ignored"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			"java.security.policy: error parsing {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			"java.security.policy: error adding Permission, {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			"java.security.policy: error adding Entry:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			"alias name not provided ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			"unable to perform substitution on alias, {0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			"substitution value, {0}, unsupported"_s
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
			"type can\'t be null"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			"keystorePasswordURL can not be specified without also specifying keystore"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			"expected keystore type"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			"expected keystore provider"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			"multiple Codebase expressions"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			"multiple SignedBy expressions"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			"duplicate keystore domain name: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			"duplicate keystore name: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			"SignedBy has empty alias"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			"can not specify Principal with a wildcard class without a wildcard name"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			"expected codeBase or SignedBy or Principal"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			"expected permission entry"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			"number "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			"expected [{0}], read [end of file]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			"expected [;], read [end of file]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			"line {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			"line {0}: expected [{1}], found [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"null principalClass or principalName"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			"PKCS11 Token [{0}] Password: "_s
		})
	}));
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources, name, initialize, &classInfo$$, Resources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources);
	});
	return class$;
}

$Class* Resources::class$ = nullptr;

		} // util
	} // security
} // sun