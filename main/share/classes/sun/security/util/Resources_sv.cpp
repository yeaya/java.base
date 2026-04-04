#include <sun/security/util/Resources_sv.h>
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

$ObjectArray2* Resources_sv::contents = nullptr;

void Resources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_sv::getContents() {
	return Resources_sv::contents;
}

void Resources_sv::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_sv::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			"ogiltiga null-indata"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"åtgärder kan endast \'läsas\'"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"syntaxen för behörighetsnamnet [{0}] är ogiltig: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"Inloggningsuppgiftsklassen följs inte av klass eller namn för identitetshavare"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"Identitetshavareklassen följs inte av något identitetshavarenamn"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"Identitetshavarenamnet måste anges inom citattecken"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			"Identitetshavarenamnet saknar avslutande citattecken"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"Identitetshavareklassen PrivateCredentialPermission kan inte ha något jokertecken (*) om inte namnet på identitetshavaren anges med jokertecken (*)"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner:\n\tIdentitetshavareklass = {0}\n\tIdentitetshavarenamn = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			"null-namn angavs"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			"nullnyckelordsmappning angavs"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"null-OID-mappning angavs"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			"ogiltigt null-AccessControlContext"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			"ogiltig null-funktion"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			"ogiltig null-klass"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Innehavare:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tIdentitetshavare: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			"\tOffentlig inloggning: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\tPrivat inloggning är inte tillgänglig\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			"\tPrivat inloggning: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\tPrivat inloggning är inte tillgänglig\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"Innehavare är skrivskyddad"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"försök att lägga till ett objekt som inte är en instans av java.security.Principal till ett subjekts uppsättning av identitetshavare"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"försöker lägga till ett objekt som inte är en instans av {0}"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			"Ogiltiga null-indata: namn"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"Inga inloggningsmoduler har konfigurerats för {0}"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			"ogiltig null-subjekt"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			"ogiltig null-CallbackHandler"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"null-subjekt - utloggning anropades före inloggning"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			u"kan inte instansiera LoginModule, {0}, eftersom den inte tillhandahåller någon icke-argumentskonstruktor"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			"kan inte instansiera LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			"kan inte instansiera LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			"hittar inte LoginModule-klassen: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"ingen åtkomst till LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			"Inloggningsfel: alla moduler ignoreras"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			"java.security.policy: fel vid tolkning av {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: fel vid tillägg av behörighet, {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy: fel vid tillägg av post:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			"aliasnamn ej angivet ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"kan ej ersätta alias, {0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"ersättningsvärde, {0}, stöds ej"_s
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
			"typen kan inte vara null"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			"kan inte ange keystorePasswordURL utan att ange nyckellager"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"förväntad nyckellagertyp"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"nyckellagerleverantör förväntades"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			"flera CodeBase-uttryck"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			"flera SignedBy-uttryck"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"domännamn för dubbelt nyckellager: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"namn för dubbelt nyckellager: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			"SignedBy har ett tomt alias"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			"kan inte ange identitetshavare med en jokerteckenklass utan ett jokerteckennamn"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			u"förväntad codeBase eller SignedBy eller identitetshavare"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"förväntade behörighetspost"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			"nummer"_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			u"förväntade [{0}], läste [filslut]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			u"förväntade [;], läste [filslut]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			"rad {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"rad {0}: förväntade [{1}], hittade [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"null-principalClass eller -principalName"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"Lösenord för PKCS11-token [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			"kan inte instansiera subjektbaserad policy"_s
		})
	}));
}

Resources_sv::Resources_sv() {
}

$Class* Resources_sv::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_sv, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_sv",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_sv, name, initialize, &classInfo$$, Resources_sv::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_sv);
	});
	return class$;
}

$Class* Resources_sv::class$ = nullptr;

		} // util
	} // security
} // sun