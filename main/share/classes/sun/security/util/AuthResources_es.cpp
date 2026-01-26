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

$FieldInfo _AuthResources_es_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_es, contents)},
	{}
};

$MethodInfo _AuthResources_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _AuthResources_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_es",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_es_FieldInfo_,
	_AuthResources_es_MethodInfo_
};

$Object* allocate$AuthResources_es($Class* clazz) {
	return $of($alloc(AuthResources_es));
}

$ObjectArray2* AuthResources_es::contents = nullptr;

void AuthResources_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_es::getContents() {
	return AuthResources_es::contents;
}

void clinit$AuthResources_es($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_es::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"entrada nula no válida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of(u"Valor de NTSid no válido"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [Grupo Principal] {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [Grupo Adicional] {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of("No se ha podido ampliar correctamente {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of("{0} (No existe tal archivo o directorio)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"Error de Configuración:\n\tNo existe tal archivo o directorio"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"Error de Configuración:\n\tIndicador de control no válido, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"Error de Configuración:\n\tNo se pueden especificar varias entradas para {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"Error de configuración:\n\tse esperaba [{0}], se ha leído [final de archivo]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"Error de configuración:\n\tLínea {0}: se esperaba [{1}], se ha encontrado [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"Error de configuración:\n\tLínea {0}: se esperaba [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"Error de configuración:\n\tLínea {0}: propiedad de sistema [{1}] ampliada a valor vacío"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of("nombre de usuario: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"contraseña: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"Introduzca la información del almacén de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"Alias de Almacén de Claves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"Contraseña de Almacén de Claves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"Contraseña de Clave Privada (opcional): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of("Nombre de usuario de Kerberos [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"Contraseña de Kerberos de {0}: "_s)
		})
	}));
}

AuthResources_es::AuthResources_es() {
}

$Class* AuthResources_es::load$($String* name, bool initialize) {
	$loadClass(AuthResources_es, name, initialize, &_AuthResources_es_ClassInfo_, clinit$AuthResources_es, allocate$AuthResources_es);
	return class$;
}

$Class* AuthResources_es::class$ = nullptr;

		} // util
	} // security
} // sun