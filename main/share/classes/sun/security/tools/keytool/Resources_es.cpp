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
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"STAR"_s,
			"*******************************************"_s
		}),
		$$new($ObjectArray, {
			"STARNN"_s,
			"*******************************************\n\n"_s
		}),
		$$new($ObjectArray, {
			".OPTION."_s,
			" [OPTION]..."_s
		}),
		$$new($ObjectArray, {
			"Options."_s,
			"Opciones:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"La opción %s se ha especificado varias veces. Se ignorarán todas excepto la última."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			"Solo se permite un comando: se ha especificado tanto %1$s como %2$s"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			"Utilice\"keytool -help\" para todos los comandos disponibles"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			u"Herramienta de Gestión de Certificados y Claves"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Comandos:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"Utilice \"keytool -command_name -help\" para la sintaxis de nombre_comando.\nUtilice la opción -conf <url> para especificar un archivo de opciones preconfigurado."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			"Genera una solicitud de certificado"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			"Cambia un alias de entrada"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			"Suprime una entrada"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Exporta el certificado"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			"Genera un par de claves"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			"Genera un clave secreta"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			"Genera un certificado a partir de una solicitud de certificado"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			"Genera CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			"Clave secreta {0} generada"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			"Clave secreta {1} de {0} bits generada"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			"Importa entradas desde una base de datos de identidades JDK 1.1.x-style"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			"Importa un certificado o una cadena de certificados"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			u"Importa una contraseña"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"Importa una o todas las entradas desde otro almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			"Clona una entrada de clave"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			u"Cambia la contraseña de clave de una entrada"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"Enumera las entradas de un almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			"Imprime el contenido de un certificado"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			"Imprime el contenido de una solicitud de certificado"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			"Imprime el contenido de un archivo CRL"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			"Genera un certificado autofirmado"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"Cambia la contraseña de almacén de un almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			"nombre de alias de la entrada que se va a procesar"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"alias de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			u"contraseña de clave de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			u"nombre de almacén de claves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"almacén de claves de destino protegido por contraseña"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			u"nombre de proveedor de almacén de claves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			u"contraseña de almacén de claves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			u"tipo de almacén de claves de destino"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"nombre distintivo"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			u"extensión X.509"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			"nombre de archivo de salida"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			"nombre de archivo de entrada"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			"nombre de algoritmo de clave"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			u"contraseña de clave"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			u"tamaño de bit de clave"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			u"nombre de almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			u"acceso al almacén de claves cacerts"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"Advertencia: Utilice la opción -cacerts para acceder al almacén de claves cacerts"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			u"nueva contraseña"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			"no solicitar"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			u"contraseña a través de mecanismo protegido"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			"agregar proveedor de seguridad por nombre (por ejemplo, SunPKCS11)\nconfigurar elemento para -addprovider"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			"agregar proveedor de seguridad por nombre de clase totalmente cualificado\nconfigurar argumento para -providerclass"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			"nombre del proveedor"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			"classpath de proveedor"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			"salida en estilo RFC"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			"nombre de algoritmo de firma"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			"alias de origen"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			u"contraseña de clave de origen"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			u"nombre de almacén de claves de origen"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"almacén de claves de origen protegido por contraseña"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			u"nombre de proveedor de almacén de claves de origen"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			u"contraseña de almacén de claves de origen"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			u"tipo de almacén de claves de origen"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			"puerto y host del servidor SSL"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			"archivo jar firmado"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			"fecha/hora de inicio de validez del certificado"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			u"contraseña de almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			u"tipo de almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			u"certificados de protección de cacerts"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			"salida detallada"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"número de validez de días"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			"identificador de serie del certificado que se va a revocar"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"error de herramienta de claves: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"Opción no permitida:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			"Valor no permitido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			u"Tipo de contraseña desconocido: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			"No se ha encontrado la variable del entorno: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"No se ha encontrado el archivo: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"La opción de comando {0} necesita un argumento."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"Advertencia: los almacenes de claves en formato PKCS12 no admiten contraseñas de clave y almacenamiento distintas. Se ignorará el valor especificado por el usuario, {0}."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"Las opciones -keystore o -storetype no se pueden utilizar con la opción -cacerts"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			"-keystore debe ser NONE si -storetype es {0}"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			"Ha habido demasiados intentos, se ha cerrado el programa"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"Los comandos -storepasswd y -keypasswd no están soportados si -storetype es {0}"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"Los comandos -keypasswd no están soportados si -storetype es PKCS12"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			"-keypass y -new no se pueden especificar si -storetype es {0}"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			"si se especifica -protected, no deben especificarse -storepass, -keypass ni -new"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			"Si se especifica -srcprotected, no se puede especificar -srcstorepass ni -srckeypass"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"Si keystore no está protegido por contraseña, no se deben especificar -storepass, -keypass ni -new"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"Si el almacén de claves de origen no está protegido por contraseña, no se deben especificar -srcstorepass ni -srckeypass"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			"Valor de fecha de inicio no permitido"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			"La validez debe ser mayor que cero"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			"%s no es un proveedor"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			"No se ha encontrado el proveedor denominado \"%s\""_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			"No se ha encontrado el proveedor \"%s\""_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			u"Error de sintaxis: no se ha proporcionado ningún comando"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"El archivo de almacén de claves de origen existe, pero está vacío: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Especifique -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u"No se deben especificar -v y -rfc simultáneamente con el comando \'list\'"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"La contraseña de clave debe tener al menos 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			u"La nueva contraseña debe tener al menos 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"El archivo de almacén de claves existe, pero está vacío: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			u"El archivo de almacén de claves no existe: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			"Se debe especificar un alias de destino"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			"Se debe especificar un alias"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			u"La contraseña del almacén de claves debe tener al menos 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			u"Introduzca la contraseña que se va a almacenar:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			u"Introduzca la contraseña del almacén de claves:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			u"Introduzca la contraseña de almacén de claves de origen:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			u"Introduzca la contraseña de almacén de claves de destino:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"La contraseña del almacén de claves es demasiado corta, debe tener al menos 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			"Tipo de Entrada Desconocido"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			"Demasiados fallos. No se ha cambiado el alias"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			"La entrada del alias {0} se ha importado correctamente."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			"La entrada del alias {0} no se ha importado."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			"Problema al importar la entrada del alias {0}: {1}.\nNo se ha importado la entrada del alias {0}."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"Comando de importación completado: {0} entradas importadas correctamente, {1} entradas incorrectas o canceladas"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"Advertencia: se sobrescribirá el alias {0} en el almacén de claves de destino"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"El alias de entrada existente {0} ya existe, ¿desea sobrescribirlo? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			u"Demasiados fallos; inténtelo más adelante"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"Solicitud de certificación almacenada en el archivo <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			"Enviar a la CA"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			"si no se especifica el alias, no se debe especificar destalias ni srckeypass"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			u"El almacén de claves pkcs12 de destino tiene storepass y keypass diferentes. Vuelva a intentarlo con -destkeypass especificado."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			"Certificado almacenado en el archivo <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			u"Se ha instalado la respuesta del certificado en el almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			u"No se ha instalado la respuesta del certificado en el almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"Se ha agregado el certificado al almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"No se ha agregado el certificado al almacén de claves"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[Almacenando {0}]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			u"{0} no tiene clave pública (certificado)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			"No se puede derivar el algoritmo de firma"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			"El alias <{0}> no existe"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			"El alias <{0}> no tiene certificado"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			"No se ha generado el par de claves, el alias <{0}> ya existe"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"Generando par de claves {1} de {0} bits para certificado autofirmado ({2}) con una validez de {3} días\n\tpara: {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"Introduzca la contraseña de clave para <{0}>"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			u"\t(INTRO si es la misma contraseña que la del almacén de claves):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"La contraseña de clave es demasiado corta; debe tener al menos 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"Demasiados fallos; no se ha agregado la clave al almacén de claves"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			"El alias de destino <{0}> ya existe"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"La contraseña es demasiado corta; debe tener al menos 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			"Demasiados fallos. No se ha clonado la entrada de clave"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			u"contraseña de clave para <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"La entrada de almacén de claves para <{0}> ya existe"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			u"Creando entrada de almacén de claves para <{0}> ..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			"No se han agregado entradas de la base de datos de identidades"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Nombre de Alias: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			u"Fecha de Creación: {0,date}"_s
		}),
		$$new($ObjectArray, {
			"alias.keyStore.getCreationDate.alias."_s,
			"{0}, {1,date}, "_s
		}),
		$$new($ObjectArray, {
			"alias."_s,
			"{0}, "_s
		}),
		$$new($ObjectArray, {
			"Entry.type.type."_s,
			"Tipo de Entrada: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			"Longitud de la Cadena de Certificado: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Certificado[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Huella de certificado (SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			u"Tipo de Almacén de Claves: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			u"Proveedor de Almacén de Claves: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"Su almacén de claves contiene {0,number,integer} entrada"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"Su almacén de claves contiene {0,number,integer} entradas"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			"Fallo al analizar la entrada"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			u"Entrada vacía"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			"No es un certificado X.509"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			u"{0} no tiene clave pública"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			"{0} no tiene certificado X.509"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			"Nuevo Certificado (Autofirmado):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			"La respuesta no tiene certificados"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			"Certificado no importado, el alias <{0}> ya existe"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			"La entrada no es un certificado X.509"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			u"El certificado ya existe en el almacén de claves con el alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			u"¿Aún desea agregarlo? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"El certificado ya existe en el almacén de claves de la CA del sistema, con el alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"¿Aún desea agregarlo a su propio almacén de claves? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			u"¿Confiar en este certificado? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			u"SÍ"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"Nuevo {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			u"Las contraseñas deben ser distintas"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Vuelva a escribir el nuevo {0}: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			u"Vuelva a introducir la contraseña: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			u"Volver a escribir la contraseña nueva: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"No coinciden. Inténtelo de nuevo"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			"Escriba el nombre de alias de {0}:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			u"Indique el nuevo nombre de alias\t(INTRO para cancelar la importación de esta entrada):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Introduzca el nombre de alias:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			"\t(INTRO si es el mismo que para <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			u"¿Cuáles son su nombre y su apellido?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			u"¿Cuál es el nombre de su unidad de organización?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			u"¿Cuál es el nombre de su organización?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			u"¿Cuál es el nombre de su ciudad o localidad?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			u"¿Cuál es el nombre de su estado o provincia?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"¿Cuál es el código de país de dos letras de la unidad?"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			u"¿Es correcto {0}?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"no"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			u"sí"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"s"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			"El alias <{0}> no tiene clave"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"El alias <{0}> hace referencia a un tipo de entrada que no es una clave privada. El comando -keyclone sólo permite la clonación de entradas de claves privadas"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			"#%d de Firmante:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			"Registro de Hora:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Firma:"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			"CRL:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			"Propietario del Certificado: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			"No es un archivo jar firmado"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			u"Ningún certificado del servidor SSL"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* La integridad de la información almacenada en el almacén de claves  *\n* NO se ha comprobado.  Para comprobar dicha integridad, *\n* debe proporcionar la contraseña del almacén de claves.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* La integridad de la información almacenada en srckeystore*\n* NO se ha comprobado.  Para comprobar dicha integridad, *\n* debe proporcionar la contraseña de srckeystore.                *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"La respuesta de certificado no contiene una clave pública para <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			"Cadena de certificado incompleta en la respuesta"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			"La cadena de certificado de la respuesta no verifica: "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			"Certificado de nivel superior en la respuesta:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			"... no es de confianza. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			u"¿Instalar respuesta de todos modos? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"NO"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			u"Las claves públicas en la respuesta y en el almacén de claves no coinciden"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			u"La respuesta del certificado y el certificado en el almacén de claves son idénticos"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			"No se ha podido definir una cadena a partir de la respuesta"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			"Respuesta incorrecta, vuelva a intentarlo"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			"No se ha generado la clave secreta, el alias <{0}> ya existe"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			u"Proporcione el valor de -keysize para la generación de claves secretas"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"ADVERTENCIA: no se ha verificado. Asegúrese de que el valor de -keystore es correcto."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			"Extensiones: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			u"(Valor vacío)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			u"Solicitud de Extensión:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			"Tipo de uso de clave desconocido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			"Tipo de uso de clave extendida desconocido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			u"Tipo de descripción de acceso desconocido: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			"Tipo de nombre general no reconocido: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			u"Esta extensión no se puede marcar como crítica. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"Se ha encontrado un número impar de dígitos hexadecimales: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			u"Tipo de extensión desconocida: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			"El comando {0} es ambiguo:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			"La solicitud de certificado"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			"El emisor"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			"El certificado generado"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			"La CRL generada"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			"La solicitud de certificado generada"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"El certificado"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"La CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"El certificado de TSA"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			"La entrada"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			"Responder"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d de %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			"Emisor <%s> en cacerts"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			"Emisor <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			u"%s (débil)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			"Clave %2$s de %1$d bits"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"Clave %2$s de %1$d bits (débil)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			u"clave %s de tamaño desconocido"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"Propietario: {0}\nEmisor: {1}\nNúmero de serie: {2}\nVálido desde: {3} hasta: {4}\nHuellas digitales del certificado:\n\t SHA1: {5}\n\t SHA256: {6}\nNombre del algoritmo de firma: {7}\nAlgoritmo de clave pública de asunto: {8}\nVersión: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			u"Solicitud de certificado PKCS #10 (Versión 1.0)\nAsunto: %1$s\nFormato: %2$s\nClave pública: %3$s\nAlgoritmo de firma: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			"Verificado por %1$s en %2$s con %3$s"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			"%1$s utiliza el algoritmo de firma %2$s, lo que se considera un riesgo de seguridad."_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			"%1$s utiliza %2$s, lo que se considera riesgo de seguridad."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"El almacén de claves %1$s utiliza un formato propietario. Se recomienda migrar a PKCS12, que es un formato estándar del sector que utiliza \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			u"Se ha migrado \"%1$s\" a %4$s. Se ha realizado la copia de seguridad del almacén de claves %2$s como \"%3$s\"."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"La copia de seguridad del almacén de claves \"%1$s\" se ha realizado como \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			u"Importando el almacén de claves de %1$s a %2$s..."_s
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
		"sun.security.tools.keytool.Resources_es",
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

			} // keytool
		} // tools
	} // security
} // sun