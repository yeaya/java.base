#include <sun/security/util/AuthResources_es.h>
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

$ObjectArray2* AuthResources_es::contents = nullptr;

void AuthResources_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_es::getContents() {
	return AuthResources_es::contents;
}

void AuthResources_es::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_es::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"entrada nula no válida: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTDomainPrincipal.name"_s,
			"NTDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTNumericCredential.name"_s,
			"NTNumericCredential: {0}"_s
		}),
		$$new($ObjectArray, {
			"Invalid.NTSid.value"_s,
			u"Valor de NTSid no válido"_s
		}),
		$$new($ObjectArray, {
			"NTSid.name"_s,
			"NTSid: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidDomainPrincipal.name"_s,
			"NTSidDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidGroupPrincipal.name"_s,
			"NTSidGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidPrimaryGroupPrincipal.name"_s,
			"NTSidPrimaryGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidUserPrincipal.name"_s,
			"NTSidUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTUserPrincipal.name"_s,
			"NTUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Primary.Group.name"_s,
			"UnixNumericGroupPrincipal [Grupo Principal] {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			"UnixNumericGroupPrincipal [Grupo Adicional] {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericUserPrincipal.name"_s,
			"UnixNumericUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixPrincipal.name"_s,
			"UnixPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"Unable.to.properly.expand.config"_s,
			"No se ha podido ampliar correctamente {0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			"{0} (No existe tal archivo o directorio)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"Error de Configuración:\n\tNo existe tal archivo o directorio"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"Error de Configuración:\n\tIndicador de control no válido, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"Error de Configuración:\n\tNo se pueden especificar varias entradas para {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"Error de configuración:\n\tse esperaba [{0}], se ha leído [final de archivo]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"Error de configuración:\n\tLínea {0}: se esperaba [{1}], se ha encontrado [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"Error de configuración:\n\tLínea {0}: se esperaba [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"Error de configuración:\n\tLínea {0}: propiedad de sistema [{1}] ampliada a valor vacío"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			"nombre de usuario: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			u"contraseña: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"Introduzca la información del almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			u"Alias de Almacén de Claves: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"Contraseña de Almacén de Claves: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"Contraseña de Clave Privada (opcional): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			"Nombre de usuario de Kerberos [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"Contraseña de Kerberos de {0}: "_s
		})
	}));
}

AuthResources_es::AuthResources_es() {
}

$Class* AuthResources_es::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_es, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_es",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_es, name, initialize, &classInfo$$, AuthResources_es::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_es);
	});
	return class$;
}

$Class* AuthResources_es::class$ = nullptr;

		} // util
	} // security
} // sun