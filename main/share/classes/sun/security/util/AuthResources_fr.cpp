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

$FieldInfo _AuthResources_fr_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_fr, contents)},
	{}
};

$MethodInfo _AuthResources_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_fr::*)()>(&AuthResources_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_fr",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_fr_FieldInfo_,
	_AuthResources_fr_MethodInfo_
};

$Object* allocate$AuthResources_fr($Class* clazz) {
	return $of($alloc(AuthResources_fr));
}

$ObjectArray2* AuthResources_fr::contents = nullptr;

void AuthResources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_fr::getContents() {
	return AuthResources_fr::contents;
}

void clinit$AuthResources_fr($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"entrée NULL non valide : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of("Valeur de NTSid non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [groupe principal] : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [groupe supplémentaire] : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of(u"Impossible de développer {0} correctement"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0} (fichier ou répertoire inexistant)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"Erreur de configuration :\n\tCe fichier ou répertoire n\'existe pas"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"Erreur de configuration :\n\tIndicateur de contrôle non valide, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"Erreur de configuration :\n\tImpossible de spécifier des entrées multiples pour {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of("Erreur de configuration :\n\tAttendu : [{0}], lu : [fin de fichier]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"Erreur de configuration :\n\tLigne {0} : attendu [{1}], trouvé [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of("Erreur de configuration :\n\tLigne {0} : attendu [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"Erreur de configuration :\n\tLigne {0} : propriété système [{1}] développée en valeur vide"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of("nom utilisateur : "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of("mot de passe : "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"Entrez les informations du fichier de clés"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"Alias du fichier de clés : "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"Mot de passe pour fichier de clés : "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"Mot de passe de la clé privée (facultatif) : "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of("Nom utilisateur Kerberos [{0}] : "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of("Mot de passe Kerberos pour {0} : "_s)
		})
	}));
}

AuthResources_fr::AuthResources_fr() {
}

$Class* AuthResources_fr::load$($String* name, bool initialize) {
	$loadClass(AuthResources_fr, name, initialize, &_AuthResources_fr_ClassInfo_, clinit$AuthResources_fr, allocate$AuthResources_fr);
	return class$;
}

$Class* AuthResources_fr::class$ = nullptr;

		} // util
	} // security
} // sun