#include <sun/security/util/Resources_es.h>

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

$FieldInfo _Resources_es_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_es, contents)},
	{}
};

$MethodInfo _Resources_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_es::*)()>(&Resources_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_es",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_es_FieldInfo_,
	_Resources_es_MethodInfo_
};

$Object* allocate$Resources_es($Class* clazz) {
	return $of($alloc(Resources_es));
}

$ObjectArray2* Resources_es::contents = nullptr;

void Resources_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_es::getContents() {
	return Resources_es::contents;
}

void clinit$Resources_es($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_es::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"entradas nulas no v\u00e1lidas"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"las acciones s\u00f3lo pueden \'leerse\'"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"sintaxis de nombre de permiso [{0}] no v\u00e1lida: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of("La clase de credencial no va seguida de una clase y nombre de principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of("La clase de principal no va seguida de un nombre de principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of("El nombre de principal debe ir entre comillas"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of("Faltan las comillas finales en el nombre de principal"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"La clase de principal PrivateCredentialPermission no puede ser un valor comod\u00edn (*) si el nombre de principal no lo es tambi\u00e9n"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner:\n\tClase de Principal = {0}\n\tNombre de Principal = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of("se ha proporcionado un nombre nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of("mapa de palabras clave proporcionado nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("mapa de OID proporcionado nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"se ha proporcionado un AccessControlContext nulo no v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"se ha proporcionado una acci\u00f3n nula no v\u00e1lida"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"se ha proporcionado una clase nula no v\u00e1lida"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Asunto:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\tCredencial P\u00fablica: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of("\tCredenciales Privadas Inaccesibles\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of("\tCredencial Privada: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of("\tCredencial Privada Inaccesible\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"El asunto es de s\u00f3lo lectura"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of("intentando agregar un objeto que no es una instancia de java.security.Principal al juego principal de un asunto"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of("intentando agregar un objeto que no es una instancia de {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"Entrada nula no v\u00e1lida: nombre"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of("No se han configurado LoginModules para {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"se ha proporcionado un asunto nulo no v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"se ha proporcionado CallbackHandler nulo no v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"asunto nulo - se ha llamado al cierre de sesi\u00f3n antes del inicio de sesi\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of("no se ha podido instanciar LoginModule, {0}, porque no incluye un constructor sin argumentos"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of("no se ha podido instanciar LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of("no se ha podido instanciar LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of("no se ha encontrado la clase LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of("no se ha podido acceder a LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"Fallo en inicio de sesi\u00f3n: se han ignorado todos los m\u00f3dulos"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: error de an\u00e1lisis de {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of("java.security.policy: error al agregar un permiso, {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of("java.security.policy: error al agregar una entrada:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of("no se ha proporcionado el nombre de alias ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"no se puede realizar la sustituci\u00f3n en el alias, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"valor de sustituci\u00f3n, {0}, no soportado"_s)
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
			$of("el tipo no puede ser nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"keystorePasswordURL no puede especificarse sin especificar tambi\u00e9n el almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"se esperaba un tipo de almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"se esperaba un proveedor de almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"expresiones m\u00faltiples de CodeBase"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"expresiones m\u00faltiples de SignedBy"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"nombre de dominio de almac\u00e9n de claves duplicado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"nombre de almac\u00e9n de claves duplicado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy tiene un alias vac\u00edo"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"no se puede especificar Principal con una clase de comod\u00edn sin un nombre de comod\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of("se esperaba codeBase o SignedBy o Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of("se esperaba un permiso de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"n\u00famero "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"se esperaba [{0}], se ha le\u00eddo [final de archivo]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"se esperaba [;], se ha le\u00eddo [final de archivo]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"l\u00ednea {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"l\u00ednea {0}: se esperaba [{1}], se ha encontrado [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("principalClass o principalName nulos"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"Contrase\u00f1a del Token PKCS11 [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"no se ha podido instanciar una pol\u00edtica basada en asunto"_s)
		})
	}));
}

Resources_es::Resources_es() {
}

$Class* Resources_es::load$($String* name, bool initialize) {
	$loadClass(Resources_es, name, initialize, &_Resources_es_ClassInfo_, clinit$Resources_es, allocate$Resources_es);
	return class$;
}

$Class* Resources_es::class$ = nullptr;

		} // util
	} // security
} // sun