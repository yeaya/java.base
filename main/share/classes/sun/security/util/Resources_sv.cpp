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

$FieldInfo _Resources_sv_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_sv, contents)},
	{}
};

$MethodInfo _Resources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_sv::*)()>(&Resources_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_sv",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_sv_FieldInfo_,
	_Resources_sv_MethodInfo_
};

$Object* allocate$Resources_sv($Class* clazz) {
	return $of($alloc(Resources_sv));
}

$ObjectArray2* Resources_sv::contents = nullptr;

void Resources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_sv::getContents() {
	return Resources_sv::contents;
}

void clinit$Resources_sv($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_sv::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of("ogiltiga null-indata"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"åtgärder kan endast \'läsas\'"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"syntaxen för behörighetsnamnet [{0}] är ogiltig: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"Inloggningsuppgiftsklassen följs inte av klass eller namn för identitetshavare"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"Identitetshavareklassen följs inte av något identitetshavarenamn"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"Identitetshavarenamnet måste anges inom citattecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of("Identitetshavarenamnet saknar avslutande citattecken"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"Identitetshavareklassen PrivateCredentialPermission kan inte ha något jokertecken (*) om inte namnet på identitetshavaren anges med jokertecken (*)"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner:\n\tIdentitetshavareklass = {0}\n\tIdentitetshavarenamn = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of("null-namn angavs"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of("nullnyckelordsmappning angavs"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("null-OID-mappning angavs"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of("ogiltigt null-AccessControlContext"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of("ogiltig null-funktion"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of("ogiltig null-klass"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Innehavare:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tIdentitetshavare: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of("\tOffentlig inloggning: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\tPrivat inloggning är inte tillgänglig\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of("\tPrivat inloggning: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\tPrivat inloggning är inte tillgänglig\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"Innehavare är skrivskyddad"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"försök att lägga till ett objekt som inte är en instans av java.security.Principal till ett subjekts uppsättning av identitetshavare"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"försöker lägga till ett objekt som inte är en instans av {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of("Ogiltiga null-indata: namn"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"Inga inloggningsmoduler har konfigurerats för {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of("ogiltig null-subjekt"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of("ogiltig null-CallbackHandler"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"null-subjekt - utloggning anropades före inloggning"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"kan inte instansiera LoginModule, {0}, eftersom den inte tillhandahåller någon icke-argumentskonstruktor"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of("kan inte instansiera LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of("kan inte instansiera LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of("hittar inte LoginModule-klassen: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"ingen åtkomst till LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of("Inloggningsfel: alla moduler ignoreras"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of("java.security.policy: fel vid tolkning av {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: fel vid tillägg av behörighet, {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: fel vid tillägg av post:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of("aliasnamn ej angivet ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"kan ej ersätta alias, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"ersättningsvärde, {0}, stöds ej"_s)
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
			$of("typen kan inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of("kan inte ange keystorePasswordURL utan att ange nyckellager"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"förväntad nyckellagertyp"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"nyckellagerleverantör förväntades"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of("flera CodeBase-uttryck"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of("flera SignedBy-uttryck"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"domännamn för dubbelt nyckellager: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"namn för dubbelt nyckellager: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of("SignedBy har ett tomt alias"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of("kan inte ange identitetshavare med en jokerteckenklass utan ett jokerteckennamn"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"förväntad codeBase eller SignedBy eller identitetshavare"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"förväntade behörighetspost"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of("nummer"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"förväntade [{0}], läste [filslut]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"förväntade [;], läste [filslut]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of("rad {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"rad {0}: förväntade [{1}], hittade [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("null-principalClass eller -principalName"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"Lösenord för PKCS11-token [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of("kan inte instansiera subjektbaserad policy"_s)
		})
	}));
}

Resources_sv::Resources_sv() {
}

$Class* Resources_sv::load$($String* name, bool initialize) {
	$loadClass(Resources_sv, name, initialize, &_Resources_sv_ClassInfo_, clinit$Resources_sv, allocate$Resources_sv);
	return class$;
}

$Class* Resources_sv::class$ = nullptr;

		} // util
	} // security
} // sun