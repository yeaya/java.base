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

$ObjectArray2* Resources_es::contents = nullptr;

void Resources_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_es::getContents() {
	return Resources_es::contents;
}

void Resources_es::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_es::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			u"entradas nulas no válidas"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"las acciones sólo pueden \'leerse\'"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"sintaxis de nombre de permiso [{0}] no válida: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			"La clase de credencial no va seguida de una clase y nombre de principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			"La clase de principal no va seguida de un nombre de principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			"El nombre de principal debe ir entre comillas"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			"Faltan las comillas finales en el nombre de principal"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"La clase de principal PrivateCredentialPermission no puede ser un valor comodín (*) si el nombre de principal no lo es también"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner:\n\tClase de Principal = {0}\n\tNombre de Principal = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			"se ha proporcionado un nombre nulo"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			"mapa de palabras clave proporcionado nulo"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"mapa de OID proporcionado nulo"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"se ha proporcionado un AccessControlContext nulo no válido"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"se ha proporcionado una acción nula no válida"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"se ha proporcionado una clase nula no válida"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Asunto:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\tCredencial Pública: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			"\tCredenciales Privadas Inaccesibles\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			"\tCredencial Privada: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			"\tCredencial Privada Inaccesible\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"El asunto es de sólo lectura"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			"intentando agregar un objeto que no es una instancia de java.security.Principal al juego principal de un asunto"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			"intentando agregar un objeto que no es una instancia de {0}"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"Entrada nula no válida: nombre"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			"No se han configurado LoginModules para {0}"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"se ha proporcionado un asunto nulo no válido"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"se ha proporcionado CallbackHandler nulo no válido"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"asunto nulo - se ha llamado al cierre de sesión antes del inicio de sesión"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			"no se ha podido instanciar LoginModule, {0}, porque no incluye un constructor sin argumentos"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			"no se ha podido instanciar LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			"no se ha podido instanciar LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			"no se ha encontrado la clase LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			"no se ha podido acceder a LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"Fallo en inicio de sesión: se han ignorado todos los módulos"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			u"java.security.policy: error de análisis de {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			"java.security.policy: error al agregar un permiso, {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			"java.security.policy: error al agregar una entrada:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			"no se ha proporcionado el nombre de alias ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"no se puede realizar la sustitución en el alias, {0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"valor de sustitución, {0}, no soportado"_s
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
			"el tipo no puede ser nulo"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"keystorePasswordURL no puede especificarse sin especificar también el almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"se esperaba un tipo de almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"se esperaba un proveedor de almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"expresiones múltiples de CodeBase"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"expresiones múltiples de SignedBy"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"nombre de dominio de almacén de claves duplicado: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"nombre de almacén de claves duplicado: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			u"SignedBy tiene un alias vacío"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"no se puede especificar Principal con una clase de comodín sin un nombre de comodín"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			"se esperaba codeBase o SignedBy o Principal"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			"se esperaba un permiso de entrada"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			u"número "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			u"se esperaba [{0}], se ha leído [final de archivo]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			u"se esperaba [;], se ha leído [final de archivo]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			u"línea {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"línea {0}: se esperaba [{1}], se ha encontrado [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"principalClass o principalName nulos"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"Contraseña del Token PKCS11 [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"no se ha podido instanciar una política basada en asunto"_s
		})
	}));
}

Resources_es::Resources_es() {
}

$Class* Resources_es::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_es, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_es",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_es, name, initialize, &classInfo$$, Resources_es::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_es);
	});
	return class$;
}

$Class* Resources_es::class$ = nullptr;

		} // util
	} // security
} // sun