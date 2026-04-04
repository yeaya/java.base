#include <sun/security/util/AuthResources_fr.h>
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

$ObjectArray2* AuthResources_fr::contents = nullptr;

void AuthResources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_fr::getContents() {
	return AuthResources_fr::contents;
}

void AuthResources_fr::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"entrée NULL non valide : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTDomainPrincipal.name"_s,
			"NTDomainPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTNumericCredential.name"_s,
			"NTNumericCredential : {0}"_s
		}),
		$$new($ObjectArray, {
			"Invalid.NTSid.value"_s,
			"Valeur de NTSid non valide"_s
		}),
		$$new($ObjectArray, {
			"NTSid.name"_s,
			"NTSid : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidDomainPrincipal.name"_s,
			"NTSidDomainPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidGroupPrincipal.name"_s,
			"NTSidGroupPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidPrimaryGroupPrincipal.name"_s,
			"NTSidPrimaryGroupPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidUserPrincipal.name"_s,
			"NTSidUserPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"NTUserPrincipal.name"_s,
			"NTUserPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Primary.Group.name"_s,
			"UnixNumericGroupPrincipal [groupe principal] : {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			u"UnixNumericGroupPrincipal [groupe supplémentaire] : {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericUserPrincipal.name"_s,
			"UnixNumericUserPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixPrincipal.name"_s,
			"UnixPrincipal : {0}"_s
		}),
		$$new($ObjectArray, {
			"Unable.to.properly.expand.config"_s,
			u"Impossible de développer {0} correctement"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0} (fichier ou répertoire inexistant)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"Erreur de configuration :\n\tCe fichier ou répertoire n\'existe pas"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"Erreur de configuration :\n\tIndicateur de contrôle non valide, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"Erreur de configuration :\n\tImpossible de spécifier des entrées multiples pour {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			"Erreur de configuration :\n\tAttendu : [{0}], lu : [fin de fichier]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"Erreur de configuration :\n\tLigne {0} : attendu [{1}], trouvé [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			"Erreur de configuration :\n\tLigne {0} : attendu [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"Erreur de configuration :\n\tLigne {0} : propriété système [{1}] développée en valeur vide"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			"nom utilisateur : "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			"mot de passe : "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"Entrez les informations du fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			u"Alias du fichier de clés : "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"Mot de passe pour fichier de clés : "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"Mot de passe de la clé privée (facultatif) : "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			"Nom utilisateur Kerberos [{0}] : "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			"Mot de passe Kerberos pour {0} : "_s
		})
	}));
}

AuthResources_fr::AuthResources_fr() {
}

$Class* AuthResources_fr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_fr, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_fr",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_fr, name, initialize, &classInfo$$, AuthResources_fr::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_fr);
	});
	return class$;
}

$Class* AuthResources_fr::class$ = nullptr;

		} // util
	} // security
} // sun