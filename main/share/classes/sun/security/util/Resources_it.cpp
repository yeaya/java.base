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

$ObjectArray2* Resources_it::contents = nullptr;

void Resources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_it::getContents() {
	return Resources_it::contents;
}

void Resources_it::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_it::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			"input nullo/i non valido/i"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			"le azioni possono essere solamente \'lette\'"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			"sintassi [{0}] non valida per il nome autorizzazione: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"la classe di credenziali non è seguita da un nome e una classe di principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"la classe di principal non è seguita da un nome principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			"il nome principal deve essere compreso tra apici"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			"apice di chiusura del nome principal mancante"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"la classe principal PrivateCredentialPermission non può essere un valore carattere jolly (*) se il nome principal a sua volta non è un valore carattere jolly (*)"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner:\n\tclasse Principal = {0}\n\tNome Principal = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			u"il nome fornito è nullo"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			"specificata mappa parole chiave null"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"specificata mappa OID null"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			"fornito un valore nullo non valido per AccessControlContext"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			"fornita un\'azione nulla non valida"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			"fornita una classe nulla non valida"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Oggetto:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			"\tCredenziale pubblica: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			"\tImpossibile accedere alle credenziali private\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			"\tCredenziale privata: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			"\tImpossibile accedere alla credenziale privata\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"L\'oggetto è di sola lettura"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"si è tentato di aggiungere un oggetto che non è un\'istanza di java.security.Principal a un set principal dell\'oggetto"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"si è tentato di aggiungere un oggetto che non è un\'\'istanza di {0}"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			"Input nullo non valido: nome"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			"Nessun LoginModules configurato per {0}"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			"fornito un valore nullo non valido per l\'oggetto"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			"fornito un valore nullo non valido per CallbackHandler"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"oggetto nullo - il logout è stato richiamato prima del login"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			"impossibile creare un\'\'istanza di LoginModule {0} in quanto non restituisce un argomento vuoto per il costruttore"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			"impossibile creare un\'istanza di LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			"impossibile creare un\'istanza di LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			"impossibile trovare la classe LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			"impossibile accedere a LoginModule "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			"Errore di login: tutti i moduli sono stati ignorati"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			"java.security.policy: errore durante l\'\'analisi di {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			"java.security.policy: errore durante l\'\'aggiunta dell\'\'autorizzazione {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			"java.security.policy: errore durante l\'\'aggiunta della voce:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			"impossibile fornire nome alias ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			"impossibile eseguire una sostituzione sull\'\'alias, {0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			"valore sostituzione, {0}, non supportato"_s
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
			u"il tipo non può essere nullo"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			"Impossibile specificare keystorePasswordURL senza specificare anche il keystore"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			"tipo keystore previsto"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			"provider di keystore previsto"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			"espressioni Codebase multiple"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			"espressioni SignedBy multiple"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			"nome dominio keystore duplicato: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			"nome keystore duplicato: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			"SignedBy presenta un alias vuoto"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			"impossibile specificare un principal con una classe carattere jolly senza un nome carattere jolly"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			"previsto codeBase o SignedBy o principal"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			"prevista voce di autorizzazione"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			"numero "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			"previsto [{0}], letto [end of file]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			"previsto [;], letto [end of file]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			"riga {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			"riga {0}: previsto [{1}], trovato [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"principalClass o principalName nullo"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			"Password per token PKCS11 [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			"impossibile creare un\'istanza dei criteri basati sull\'oggetto"_s
		})
	}));
}

Resources_it::Resources_it() {
}

$Class* Resources_it::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_it, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_it",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_it, name, initialize, &classInfo$$, Resources_it::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_it);
	});
	return class$;
}

$Class* Resources_it::class$ = nullptr;

		} // util
	} // security
} // sun