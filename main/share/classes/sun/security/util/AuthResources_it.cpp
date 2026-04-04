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

$ObjectArray2* AuthResources_it::contents = nullptr;

void AuthResources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_it::getContents() {
	return AuthResources_it::contents;
}

void AuthResources_it::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_it::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			"input nullo non valido: {0}"_s
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
			"Valore NTSid non valido"_s
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
			"UnixNumericGroupPrincipal [gruppo primario]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			"UnixNumericGroupPrincipal [gruppo supplementare]: {0}"_s
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
			"Impossibile espandere correttamente {0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			"{0} (file o directory inesistente)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			"Errore di configurazione:\n\tFile o directory inesistente"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			"Errore di configurazione:\n\tflag di controllo non valido, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"Errore di configurazione:\n\timpossibile specificare più valori per {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			"Errore di configurazione:\n\tprevisto [{0}], letto [end of file]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			"Errore di configurazione:\n\triga {0}: previsto [{1}], trovato [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			"Errore di configurazione:\n\triga {0}: previsto [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"Errore di configurazione:\n\triga {0}: proprietà di sistema [{1}] espansa a valore vuoto"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			"Nome utente: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			"Password: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			"Immettere le informazioni per il keystore"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			"Alias keystore: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			"Password keystore: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			"Password chiave privata (opzionale): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			"Nome utente Kerberos [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			"Password Kerberos per {0}: "_s
		})
	}));
}

AuthResources_it::AuthResources_it() {
}

$Class* AuthResources_it::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_it, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_it",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_it, name, initialize, &classInfo$$, AuthResources_it::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_it);
	});
	return class$;
}

$Class* AuthResources_it::class$ = nullptr;

		} // util
	} // security
} // sun