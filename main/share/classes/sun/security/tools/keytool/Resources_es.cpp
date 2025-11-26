#include <sun/security/tools/keytool/Resources_es.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

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
	"sun.security.tools.keytool.Resources_es",
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
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("STAR"_s),
			$of("*******************************************"_s)
		}),
		$$new($ObjectArray, {
			$of("STARNN"_s),
			$of("*******************************************\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".OPTION."_s),
			$of(" [OPTION]..."_s)
		}),
		$$new($ObjectArray, {
			$of("Options."_s),
			$of("Opciones:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"La opci\u00f3n %s se\u00a0ha especificado\u00a0varias veces. Se ignorar\u00e1n todas excepto la \u00faltima."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of("Solo se permite un comando: se ha especificado tanto %1$s como %2$s"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of("Utilice\"keytool -help\" para todos los comandos disponibles"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"Herramienta de Gesti\u00f3n de Certificados y Claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Comandos:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"Utilice \"keytool -command_name -help\" para la sintaxis de nombre_comando.\nUtilice la opci\u00f3n -conf <url> para especificar un archivo de opciones preconfigurado."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of("Genera una solicitud de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of("Cambia un alias de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of("Suprime una entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Exporta el certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of("Genera un par de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of("Genera un clave secreta"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of("Genera un certificado a partir de una solicitud de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of("Genera CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of("Clave secreta {0} generada"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of("Clave secreta {1} de {0} bits generada"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of("Importa entradas desde una base de datos de identidades JDK 1.1.x-style"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Importa un certificado o una cadena de certificados"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of(u"Importa una contrase\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"Importa una o todas las entradas desde otro almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of("Clona una entrada de clave"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"Cambia la contrase\u00f1a de clave de una entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"Enumera las entradas de un almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of("Imprime el contenido de un certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of("Imprime el contenido de una solicitud de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of("Imprime el contenido de un archivo CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of("Genera un certificado autofirmado"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"Cambia la contrase\u00f1a de almac\u00e9n de un almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of("nombre de alias de la entrada que se va a procesar"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("alias de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"contrase\u00f1a de clave de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"nombre de almac\u00e9n de claves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"almac\u00e9n de claves de destino protegido por contrase\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"nombre de proveedor de almac\u00e9n de claves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"contrase\u00f1a de almac\u00e9n de claves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"tipo de almac\u00e9n de claves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("nombre distintivo"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"extensi\u00f3n X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of("nombre de archivo de salida"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of("nombre de archivo de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of("nombre de algoritmo de clave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"contrase\u00f1a de clave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"tama\u00f1o de bit de clave"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"nombre de almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"acceso al almac\u00e9n de claves cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"Advertencia: Utilice la opci\u00f3n -cacerts para acceder al almac\u00e9n de claves cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of(u"nueva contrase\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of("no solicitar"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"contrase\u00f1a a trav\u00e9s de mecanismo protegido"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of("agregar proveedor de seguridad por nombre (por ejemplo, SunPKCS11)\nconfigurar elemento para -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of("agregar proveedor de seguridad por nombre de clase totalmente cualificado\nconfigurar argumento para -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of("nombre del proveedor"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of("classpath de proveedor"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("salida en estilo RFC"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of("nombre de algoritmo de firma"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of("alias de origen"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"contrase\u00f1a de clave de origen"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"nombre de almac\u00e9n de claves de origen"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"almac\u00e9n de claves de origen protegido por contrase\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"nombre de proveedor de almac\u00e9n de claves de origen"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"contrase\u00f1a de almac\u00e9n de claves de origen"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"tipo de almac\u00e9n de claves de origen"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of("puerto y host del servidor SSL"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("archivo jar firmado"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of("fecha/hora de inicio de validez del certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"contrase\u00f1a de almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"tipo de almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"certificados de protecci\u00f3n de cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of("salida detallada"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"n\u00famero de validez de d\u00edas"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of("identificador de serie del certificado que se va a revocar"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("error de herramienta de claves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"Opci\u00f3n no permitida:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of("Valor no permitido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"Tipo de contrase\u00f1a desconocido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of("No se ha encontrado la variable del entorno: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("No se ha encontrado el archivo: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"La opci\u00f3n de comando {0} necesita un argumento."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Advertencia: los almacenes de claves en formato PKCS12 no admiten contrase\u00f1as de clave y almacenamiento distintas. Se ignorar\u00e1 el valor especificado por el usuario, {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"Las opciones -keystore o -storetype no se pueden utilizar con la opci\u00f3n -cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of("-keystore debe ser NONE si -storetype es {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of("Ha habido demasiados intentos, se ha cerrado el programa"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"Los comandos -storepasswd y -keypasswd no est\u00e1n soportados si -storetype es {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"Los comandos -keypasswd no est\u00e1n soportados si -storetype es PKCS12"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of("-keypass y -new no se pueden especificar si -storetype es {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of("si se especifica -protected, no deben especificarse -storepass, -keypass ni -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of("Si se especifica -srcprotected, no se puede especificar -srcstorepass ni -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"Si keystore no est\u00e1 protegido por contrase\u00f1a, no se deben especificar -storepass, -keypass ni -new"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"Si el almac\u00e9n de claves de origen no est\u00e1 protegido por contrase\u00f1a, no se deben especificar -srcstorepass ni -srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of("Valor de fecha de inicio no permitido"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of("La validez debe ser mayor que cero"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of("%s no es un proveedor"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of("No se ha encontrado el proveedor denominado \"%s\""_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of("No se ha encontrado el proveedor \"%s\""_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"Error de sintaxis: no se ha proporcionado ning\u00fan comando"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"El archivo de almac\u00e9n de claves de origen existe, pero est\u00e1 vac\u00edo: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Especifique -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"No se deben especificar -v y -rfc simult\u00e1neamente con el comando \'list\'"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"La contrase\u00f1a de clave debe tener al menos 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"La nueva contrase\u00f1a debe tener al menos 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"El archivo de almac\u00e9n de claves existe, pero est\u00e1 vac\u00edo: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"El archivo de almac\u00e9n de claves no existe: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of("Se debe especificar un alias de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of("Se debe especificar un alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"La contrase\u00f1a del almac\u00e9n de claves debe tener al menos 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"Introduzca la contrase\u00f1a que se va a almacenar:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"Introduzca la contrase\u00f1a del almac\u00e9n de claves:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"Introduzca la contrase\u00f1a de almac\u00e9n de claves de origen:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"Introduzca la contrase\u00f1a de almac\u00e9n de claves de destino:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"La contrase\u00f1a del almac\u00e9n de claves es demasiado corta, debe tener al menos 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of("Tipo de Entrada Desconocido"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of("Demasiados fallos. No se ha cambiado el alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of("La entrada del alias {0} se ha importado correctamente."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of("La entrada del alias {0} no se ha importado."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of("Problema al importar la entrada del alias {0}: {1}.\nNo se ha importado la entrada del alias {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"Comando de importaci\u00f3n completado: {0} entradas importadas correctamente, {1} entradas incorrectas o canceladas"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"Advertencia: se sobrescribir\u00e1 el alias {0} en el almac\u00e9n de claves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"El alias de entrada existente {0} ya existe, \u00bfdesea sobrescribirlo? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"Demasiados fallos; int\u00e9ntelo m\u00e1s adelante"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"Solicitud de certificaci\u00f3n almacenada en el archivo <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of("Enviar a la CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of("si no se especifica el alias, no se debe especificar destalias ni srckeypass"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"El almac\u00e9n de claves pkcs12 de destino tiene storepass y keypass diferentes. Vuelva a intentarlo con -destkeypass especificado."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of("Certificado almacenado en el archivo <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"Se ha instalado la respuesta del certificado en el almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"No se ha instalado la respuesta del certificado en el almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"Se ha agregado el certificado al almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"No se ha agregado el certificado al almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[Almacenando {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0} no tiene clave p\u00fablica (certificado)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of("No se puede derivar el algoritmo de firma"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of("El alias <{0}> no existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of("El alias <{0}> no tiene certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of("No se ha generado el par de claves, el alias <{0}> ya existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"Generando par de claves {1} de {0} bits para certificado autofirmado ({2}) con una validez de {3} d\u00edas\n\tpara: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"Introduzca la contrase\u00f1a de clave para <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(INTRO si es la misma contrase\u00f1a que la del almac\u00e9n de claves):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"La contrase\u00f1a de clave es demasiado corta; debe tener al menos 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"Demasiados fallos; no se ha agregado la clave al almac\u00e9n de claves"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of("El alias de destino <{0}> ya existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"La contrase\u00f1a es demasiado corta; debe tener al menos 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of("Demasiados fallos. No se ha clonado la entrada de clave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"contrase\u00f1a de clave para <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"La entrada de almac\u00e9n de claves para <{0}> ya existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"Creando entrada de almac\u00e9n de claves para <{0}> ..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of("No se han agregado entradas de la base de datos de identidades"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Nombre de Alias: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"Fecha de Creaci\u00f3n: {0,date}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.keyStore.getCreationDate.alias."_s),
			$of("{0}, {1,date}, "_s)
		}),
		$$new($ObjectArray, {
			$of("alias."_s),
			$of("{0}, "_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.type.type."_s),
			$of("Tipo de Entrada: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of("Longitud de la Cadena de Certificado: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Certificado[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Huella de certificado (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"Tipo de Almac\u00e9n de Claves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"Proveedor de Almac\u00e9n de Claves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"Su almac\u00e9n de claves contiene {0,number,integer} entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"Su almac\u00e9n de claves contiene {0,number,integer} entradas"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of("Fallo al analizar la entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"Entrada vac\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of("No es un certificado X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0} no tiene clave p\u00fablica"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of("{0} no tiene certificado X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of("Nuevo Certificado (Autofirmado):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of("La respuesta no tiene certificados"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of("Certificado no importado, el alias <{0}> ya existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of("La entrada no es un certificado X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"El certificado ya existe en el almac\u00e9n de claves con el alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"\u00bfA\u00fan desea agregarlo? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"El certificado ya existe en el almac\u00e9n de claves de la CA del sistema, con el alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"\u00bfA\u00fan desea agregarlo a su propio almac\u00e9n de claves? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"\u00bfConfiar en este certificado? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of(u"S\u00cd"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("Nuevo {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"Las contrase\u00f1as deben ser distintas"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Vuelva a escribir el nuevo {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"Vuelva a introducir la contrase\u00f1a: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of(u"Volver a escribir la contrase\u00f1a nueva: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"No coinciden. Int\u00e9ntelo de nuevo"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of("Escriba el nombre de alias de {0}:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"Indique el nuevo nombre de alias\t(INTRO para cancelar la importaci\u00f3n de esta entrada):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Introduzca el nombre de alias:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of("\t(INTRO si es el mismo que para <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"\u00bfCu\u00e1les son su nombre y su apellido?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"\u00bfCu\u00e1l es el nombre de su unidad de organizaci\u00f3n?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"\u00bfCu\u00e1l es el nombre de su organizaci\u00f3n?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"\u00bfCu\u00e1l es el nombre de su ciudad o localidad?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"\u00bfCu\u00e1l es el nombre de su estado o provincia?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"\u00bfCu\u00e1l es el c\u00f3digo de pa\u00eds de dos letras de la unidad?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"\u00bfEs correcto {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("no"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"s\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("s"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of("El alias <{0}> no tiene clave"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"El alias <{0}> hace referencia a un tipo de entrada que no es una clave privada. El comando -keyclone s\u00f3lo permite la clonaci\u00f3n de entradas de claves privadas"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of("#%d de Firmante:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of("Registro de Hora:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Firma:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRL:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of("Propietario del Certificado: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of("No es un archivo jar firmado"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"Ning\u00fan certificado del servidor SSL"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* La integridad de la informaci\u00f3n almacenada en el almac\u00e9n de claves  *\n* NO se ha comprobado.  Para comprobar dicha integridad, *\n* debe proporcionar la contrase\u00f1a del almac\u00e9n de claves.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* La integridad de la informaci\u00f3n almacenada en srckeystore*\n* NO se ha comprobado.  Para comprobar dicha integridad, *\n* debe proporcionar la contrase\u00f1a de srckeystore.                *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"La respuesta de certificado no contiene una clave p\u00fablica para <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of("Cadena de certificado incompleta en la respuesta"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of("La cadena de certificado de la respuesta no verifica: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of("Certificado de nivel superior en la respuesta:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of("... no es de confianza. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"\u00bfInstalar respuesta de todos modos? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("NO"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"Las claves p\u00fablicas en la respuesta y en el almac\u00e9n de claves no coinciden"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"La respuesta del certificado y el certificado en el almac\u00e9n de claves son id\u00e9nticos"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of("No se ha podido definir una cadena a partir de la respuesta"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of("Respuesta incorrecta, vuelva a intentarlo"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of("No se ha generado la clave secreta, el alias <{0}> ya existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"Proporcione el valor de -keysize para la generaci\u00f3n de claves secretas"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"ADVERTENCIA: no se ha verificado. Aseg\u00farese de que el valor de -keystore es correcto."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of("Extensiones: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of(u"(Valor vac\u00edo)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"Solicitud de Extensi\u00f3n:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of("Tipo de uso de clave desconocido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of("Tipo de uso de clave extendida desconocido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of(u"Tipo de descripci\u00f3n de acceso desconocido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of("Tipo de nombre general no reconocido: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"Esta extensi\u00f3n no se puede marcar como cr\u00edtica. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"Se ha encontrado un n\u00famero impar de d\u00edgitos hexadecimales: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"Tipo de extensi\u00f3n desconocida: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of("El comando {0} es ambiguo:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of("La solicitud de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of("El emisor"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("El certificado generado"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of("La CRL generada"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of("La solicitud de certificado generada"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("El certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("La CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("El certificado de TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of("La entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of("Responder"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d de %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of("Emisor <%s> en cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of("Emisor <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (d\u00e9bil)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of("Clave %2$s de %1$d bits"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"Clave %2$s de %1$d bits (d\u00e9bil)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"clave %s de tama\u00f1o desconocido"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"Propietario: {0}\nEmisor: {1}\nN\u00famero de serie: {2}\nV\u00e1lido desde: {3} hasta: {4}\nHuellas digitales del certificado:\n\t SHA1: {5}\n\t SHA256: {6}\nNombre del algoritmo de firma: {7}\nAlgoritmo de clave p\u00fablica de asunto: {8}\nVersi\u00f3n: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"Solicitud de certificado PKCS #10 (Versi\u00f3n 1.0)\nAsunto: %1$s\nFormato: %2$s\nClave p\u00fablica: %3$s\nAlgoritmo de firma: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Verificado por %1$s en %2$s con %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of("%1$s utiliza el algoritmo de firma %2$s, lo que se considera un riesgo de seguridad."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of("%1$s utiliza %2$s, lo que se considera riesgo de seguridad."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"El almac\u00e9n de claves %1$s utiliza un formato propietario. Se recomienda migrar a PKCS12, que es un formato est\u00e1ndar del sector que utiliza \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"Se ha migrado \"%1$s\" a %4$s. Se ha realizado la copia de seguridad del almac\u00e9n de claves %2$s como \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"La copia de seguridad del almac\u00e9n de claves \"%1$s\" se ha realizado como \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"Importando el almac\u00e9n de claves de %1$s a %2$s..."_s)
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

			} // keytool
		} // tools
	} // security
} // sun