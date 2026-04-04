#include <sun/security/util/Resources_fr.h>
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

$ObjectArray2* Resources_fr::contents = nullptr;

void Resources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_fr::getContents() {
	return Resources_fr::contents;
}

void Resources_fr::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			u"entrées NULL non valides"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			"les actions sont accessibles en lecture uniquement"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			"syntaxe de nom de droit [{0}] non valide : "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			"Classe Credential non suivie d\'une classe et d\'un nom de principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			"Classe de principal non suivie d\'un nom de principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"Le nom de principal doit être indiqué entre guillemets"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			"Guillemet fermant manquant pour le nom de principal"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"La classe de principal PrivateCredentialPermission ne peut pas être une valeur générique (*) si le nom de principal n\'est pas une valeur générique (*)"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner :\n\tClasse de principal = {0}\n\tNom de principal = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			"nom NULL fourni"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			u"mappage de mots-clés NULL fourni"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"mappage OID NULL fourni"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			"AccessControlContext NULL fourni non valide"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			"action NULL fournie non valide"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			"classe NULL fournie non valide"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Objet :\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal : "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			"\tInformations d\'identification publiques : "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\tInformations d\'identification privées inaccessibles\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			u"\tInformations d\'identification privées : "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\tInformations d\'identification privées inaccessibles\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			"Sujet en lecture seule"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			"tentative d\'ajout d\'un objet qui n\'est pas une instance de java.security.Principal dans un ensemble de principaux du sujet"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			"tentative d\'\'ajout d\'\'un objet qui n\'\'est pas une instance de {0}"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag : "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"Entrée NULL non valide : nom"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"Aucun LoginModule configuré pour {0}"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			"sujet NULL fourni non valide"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			"CallbackHandler NULL fourni non valide"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"sujet NULL - Tentative de déconnexion avant la connexion"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			"impossible d\'\'instancier LoginModule {0} car il ne fournit pas de constructeur sans argument"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			"impossible d\'instancier LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			u"impossible d\'instancier LoginModule : "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			"classe LoginModule introuvable : "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"impossible d\'accéder à LoginModule : "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"Echec de connexion : tous les modules ont été ignorés"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			"java.security.policy : erreur d\'\'analyse de {0} :\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			"java.security.policy : erreur d\'\'ajout de droit, {0} :\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy : erreur d\'\'ajout d\'\'entrée :\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			"nom d\'\'alias non fourni ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			"impossible d\'\'effectuer une substitution pour l\'\'alias, {0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			"valeur de substitution, {0}, non prise en charge"_s
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
			u"le type ne peut être NULL"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"Impossible de spécifier keystorePasswordURL sans indiquer aussi le fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"type de fichier de clés attendu"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"fournisseur de fichier de clés attendu"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			"expressions Codebase multiples"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			"expressions SignedBy multiples"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"nom de domaine de fichier de clés en double : {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"nom de fichier de clés en double : {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			u"SignedBy possède un alias vide"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"impossible de spécifier le principal avec une classe générique sans nom générique"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			"codeBase, SignedBy ou Principal attendu"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"entrée de droit attendue"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			"nombre "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			"attendu [{0}], lu [fin de fichier]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			"attendu [;], lu [fin de fichier]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			"ligne {0} : {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"ligne {0} : attendu [{1}], trouvé [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"principalClass ou principalName NULL"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			"Mot de passe PKCS11 Token [{0}] : "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"impossible d\'instancier les règles basées sur le sujet"_s
		})
	}));
}

Resources_fr::Resources_fr() {
}

$Class* Resources_fr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_fr, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_fr",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_fr, name, initialize, &classInfo$$, Resources_fr::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_fr);
	});
	return class$;
}

$Class* Resources_fr::class$ = nullptr;

		} // util
	} // security
} // sun