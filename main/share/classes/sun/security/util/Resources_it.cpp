#include <sun/security/util/Resources_it.h>

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

$FieldInfo _Resources_it_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_it, contents)},
	{}
};

$MethodInfo _Resources_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _Resources_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_it",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_it_FieldInfo_,
	_Resources_it_MethodInfo_
};

$Object* allocate$Resources_it($Class* clazz) {
	return $of($alloc(Resources_it));
}

$ObjectArray2* Resources_it::contents = nullptr;

void Resources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_it::getContents() {
	return Resources_it::contents;
}

void clinit$Resources_it($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_it::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of("input nullo/i non valido/i"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of("le azioni possono essere solamente \'lette\'"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of("sintassi [{0}] non valida per il nome autorizzazione: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"la classe di credenziali non è seguita da un nome e una classe di principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"la classe di principal non è seguita da un nome principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of("il nome principal deve essere compreso tra apici"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of("apice di chiusura del nome principal mancante"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"la classe principal PrivateCredentialPermission non può essere un valore carattere jolly (*) se il nome principal a sua volta non è un valore carattere jolly (*)"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner:\n\tclasse Principal = {0}\n\tNome Principal = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"il nome fornito è nullo"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of("specificata mappa parole chiave null"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("specificata mappa OID null"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of("fornito un valore nullo non valido per AccessControlContext"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of("fornita un\'azione nulla non valida"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of("fornita una classe nulla non valida"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Oggetto:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of("\tCredenziale pubblica: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of("\tImpossibile accedere alle credenziali private\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of("\tCredenziale privata: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of("\tImpossibile accedere alla credenziale privata\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"L\'oggetto è di sola lettura"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"si è tentato di aggiungere un oggetto che non è un\'istanza di java.security.Principal a un set principal dell\'oggetto"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"si è tentato di aggiungere un oggetto che non è un\'\'istanza di {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of("Input nullo non valido: nome"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of("Nessun LoginModules configurato per {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of("fornito un valore nullo non valido per l\'oggetto"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of("fornito un valore nullo non valido per CallbackHandler"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"oggetto nullo - il logout è stato richiamato prima del login"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of("impossibile creare un\'\'istanza di LoginModule {0} in quanto non restituisce un argomento vuoto per il costruttore"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of("impossibile creare un\'istanza di LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of("impossibile creare un\'istanza di LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of("impossibile trovare la classe LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of("impossibile accedere a LoginModule "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of("Errore di login: tutti i moduli sono stati ignorati"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of("java.security.policy: errore durante l\'\'analisi di {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of("java.security.policy: errore durante l\'\'aggiunta dell\'\'autorizzazione {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of("java.security.policy: errore durante l\'\'aggiunta della voce:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of("impossibile fornire nome alias ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of("impossibile eseguire una sostituzione sull\'\'alias, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of("valore sostituzione, {0}, non supportato"_s)
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
			$of(u"il tipo non può essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of("Impossibile specificare keystorePasswordURL senza specificare anche il keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of("tipo keystore previsto"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of("provider di keystore previsto"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of("espressioni Codebase multiple"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of("espressioni SignedBy multiple"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of("nome dominio keystore duplicato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of("nome keystore duplicato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of("SignedBy presenta un alias vuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of("impossibile specificare un principal con una classe carattere jolly senza un nome carattere jolly"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of("previsto codeBase o SignedBy o principal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of("prevista voce di autorizzazione"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of("numero "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of("previsto [{0}], letto [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of("previsto [;], letto [end of file]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of("riga {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of("riga {0}: previsto [{1}], trovato [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("principalClass o principalName nullo"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of("Password per token PKCS11 [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of("impossibile creare un\'istanza dei criteri basati sull\'oggetto"_s)
		})
	}));
}

Resources_it::Resources_it() {
}

$Class* Resources_it::load$($String* name, bool initialize) {
	$loadClass(Resources_it, name, initialize, &_Resources_it_ClassInfo_, clinit$Resources_it, allocate$Resources_it);
	return class$;
}

$Class* Resources_it::class$ = nullptr;

		} // util
	} // security
} // sun