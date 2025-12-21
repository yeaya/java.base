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

$FieldInfo _Resources_fr_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_fr, contents)},
	{}
};

$MethodInfo _Resources_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_fr::*)()>(&Resources_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_fr",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_fr_FieldInfo_,
	_Resources_fr_MethodInfo_
};

$Object* allocate$Resources_fr($Class* clazz) {
	return $of($alloc(Resources_fr));
}

$ObjectArray2* Resources_fr::contents = nullptr;

void Resources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_fr::getContents() {
	return Resources_fr::contents;
}

void clinit$Resources_fr($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"entrées NULL non valides"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of("les actions sont accessibles en lecture uniquement"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of("syntaxe de nom de droit [{0}] non valide : "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of("Classe Credential non suivie d\'une classe et d\'un nom de principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of("Classe de principal non suivie d\'un nom de principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"Le nom de principal doit être indiqué entre guillemets"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of("Guillemet fermant manquant pour le nom de principal"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"La classe de principal PrivateCredentialPermission ne peut pas être une valeur générique (*) si le nom de principal n\'est pas une valeur générique (*)"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner :\n\tClasse de principal = {0}\n\tNom de principal = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of("nom NULL fourni"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"mappage de mots-clés NULL fourni"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("mappage OID NULL fourni"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of("AccessControlContext NULL fourni non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of("action NULL fournie non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of("classe NULL fournie non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Objet :\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal : "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of("\tInformations d\'identification publiques : "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\tInformations d\'identification privées inaccessibles\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\tInformations d\'identification privées : "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\tInformations d\'identification privées inaccessibles\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of("Sujet en lecture seule"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of("tentative d\'ajout d\'un objet qui n\'est pas une instance de java.security.Principal dans un ensemble de principaux du sujet"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of("tentative d\'\'ajout d\'\'un objet qui n\'\'est pas une instance de {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag : "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"Entrée NULL non valide : nom"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"Aucun LoginModule configuré pour {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of("sujet NULL fourni non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of("CallbackHandler NULL fourni non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"sujet NULL - Tentative de déconnexion avant la connexion"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of("impossible d\'\'instancier LoginModule {0} car il ne fournit pas de constructeur sans argument"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of("impossible d\'instancier LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"impossible d\'instancier LoginModule : "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of("classe LoginModule introuvable : "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"impossible d\'accéder à LoginModule : "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"Echec de connexion : tous les modules ont été ignorés"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of("java.security.policy : erreur d\'\'analyse de {0} :\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of("java.security.policy : erreur d\'\'ajout de droit, {0} :\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy : erreur d\'\'ajout d\'\'entrée :\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of("nom d\'\'alias non fourni ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of("impossible d\'\'effectuer une substitution pour l\'\'alias, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of("valeur de substitution, {0}, non prise en charge"_s)
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
			$of(u"le type ne peut être NULL"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"Impossible de spécifier keystorePasswordURL sans indiquer aussi le fichier de clés"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"type de fichier de clés attendu"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"fournisseur de fichier de clés attendu"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of("expressions Codebase multiples"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of("expressions SignedBy multiples"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"nom de domaine de fichier de clés en double : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"nom de fichier de clés en double : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy possède un alias vide"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"impossible de spécifier le principal avec une classe générique sans nom générique"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of("codeBase, SignedBy ou Principal attendu"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"entrée de droit attendue"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of("nombre "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of("attendu [{0}], lu [fin de fichier]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of("attendu [;], lu [fin de fichier]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of("ligne {0} : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"ligne {0} : attendu [{1}], trouvé [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("principalClass ou principalName NULL"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of("Mot de passe PKCS11 Token [{0}] : "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"impossible d\'instancier les règles basées sur le sujet"_s)
		})
	}));
}

Resources_fr::Resources_fr() {
}

$Class* Resources_fr::load$($String* name, bool initialize) {
	$loadClass(Resources_fr, name, initialize, &_Resources_fr_ClassInfo_, clinit$Resources_fr, allocate$Resources_fr);
	return class$;
}

$Class* Resources_fr::class$ = nullptr;

		} // util
	} // security
} // sun