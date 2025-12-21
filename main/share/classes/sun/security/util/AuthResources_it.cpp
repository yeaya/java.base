#include <sun/security/util/AuthResources_it.h>

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

$FieldInfo _AuthResources_it_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_it, contents)},
	{}
};

$MethodInfo _AuthResources_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_it::*)()>(&AuthResources_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_it",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_it_FieldInfo_,
	_AuthResources_it_MethodInfo_
};

$Object* allocate$AuthResources_it($Class* clazz) {
	return $of($alloc(AuthResources_it));
}

$ObjectArray2* AuthResources_it::contents = nullptr;

void AuthResources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_it::getContents() {
	return AuthResources_it::contents;
}

void clinit$AuthResources_it($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_it::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of("input nullo non valido: {0}"_s)
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
			$of("Valore NTSid non valido"_s)
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
			$of("UnixNumericGroupPrincipal [gruppo primario]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [gruppo supplementare]: {0}"_s)
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
			$of("Impossibile espandere correttamente {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of("{0} (file o directory inesistente)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of("Errore di configurazione:\n\tFile o directory inesistente"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of("Errore di configurazione:\n\tflag di controllo non valido, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"Errore di configurazione:\n\timpossibile specificare più valori per {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of("Errore di configurazione:\n\tprevisto [{0}], letto [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of("Errore di configurazione:\n\triga {0}: previsto [{1}], trovato [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of("Errore di configurazione:\n\triga {0}: previsto [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"Errore di configurazione:\n\triga {0}: proprietà di sistema [{1}] espansa a valore vuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of("Nome utente: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of("Password: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of("Immettere le informazioni per il keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of("Alias keystore: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of("Password keystore: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of("Password chiave privata (opzionale): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of("Nome utente Kerberos [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of("Password Kerberos per {0}: "_s)
		})
	}));
}

AuthResources_it::AuthResources_it() {
}

$Class* AuthResources_it::load$($String* name, bool initialize) {
	$loadClass(AuthResources_it, name, initialize, &_AuthResources_it_ClassInfo_, clinit$AuthResources_it, allocate$AuthResources_it);
	return class$;
}

$Class* AuthResources_it::class$ = nullptr;

		} // util
	} // security
} // sun