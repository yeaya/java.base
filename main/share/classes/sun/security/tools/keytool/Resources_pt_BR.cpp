#include <sun/security/tools/keytool/Resources_pt_BR.h>

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

$FieldInfo _Resources_pt_BR_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_pt_BR, contents)},
	{}
};

$MethodInfo _Resources_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_pt_BR::*)()>(&Resources_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_pt_BR_FieldInfo_,
	_Resources_pt_BR_MethodInfo_
};

$Object* allocate$Resources_pt_BR($Class* clazz) {
	return $of($alloc(Resources_pt_BR));
}

$ObjectArray2* Resources_pt_BR::contents = nullptr;

void Resources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_pt_BR::getContents() {
	return Resources_pt_BR::contents;
}

void clinit$Resources_pt_BR($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_pt_BR::contents, $new($ObjectArray2, {
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
			$of(u"Op\u00e7\u00f5es:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"A op\u00e7\u00e3o %s foi especificada v\u00e1rias vezes. Todas, exceto a \u00faltima, ser\u00e3o ignoradas."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"Somente um comando \u00e9 permitido: tanto %1$s quanto %2$s foram especificados."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of(u"Use \"keytool -help\" para todos os comandos dispon\u00edveis"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of("Ferramenta de Gerenciamento de Chave e Certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Comandos:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"Utilize \"keytool -command_name -help\" para uso de command_name.\nUtilize a op\u00e7\u00e3o -conf <url> para especificar um arquivo de op\u00e7\u00f5es pr\u00e9-configurado."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"Gera uma solicita\u00e7\u00e3o de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of("Altera um alias de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of("Exclui uma entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Exporta o certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of("Gera um par de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of("Gera uma chave secreta"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"Gera um certificado de uma solicita\u00e7\u00e3o de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of("Gera CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of("Chave secreta {0} gerada"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of("Chave secreta {1} de {0} bits gerada"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of("Importa entradas de um banco de dados de identidade JDK 1.1.x-style"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Importa um certificado ou uma cadeia de certificados"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of("Importa uma senha"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"Importa uma ou todas as entradas de outra \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of("Clona uma entrada de chave"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of("Altera a senha da chave de uma entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"Lista entradas em uma \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of(u"Imprime o conte\u00fado de um certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of(u"Imprime o conte\u00fado de uma solicita\u00e7\u00e3o de certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"Imprime o conte\u00fado de um arquivo CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of("Gera um certificado autoassinado"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"Altera a senha de armazenamento de uma \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of("nome do alias da entrada a ser processada"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("alias de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of("senha da chave de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"nome da \u00e1rea de armazenamento de chaves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"senha protegida da \u00e1rea de armazenamento de chaves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"nome do fornecedor da \u00e1rea de armazenamento de chaves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"senha da \u00e1rea de armazenamento de chaves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"tipo de \u00e1rea de armazenamento de chaves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("nome distinto"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of(u"extens\u00e3o X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of(u"nome do arquivo de sa\u00edda"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of("nome do arquivo de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of("nome do algoritmo da chave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of("senha da chave"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of("tamanho do bit da chave"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"nome da \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"acessar a \u00e1rea de armazenamento de chaves cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"Advert\u00eancia: use a op\u00e7\u00e3o -cacerts para acessar a \u00e1rea de armazenamento de chaves cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of("nova senha"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of(u"n\u00e3o perguntar"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of("senha por meio de mecanismo protegido"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"adicionar provedor de seguran\u00e7a por nome (por exemplo, SunPKCS11)\nconfigurar argumento para -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"adicionar provedor de seguran\u00e7a por nome de classe totalmente qualificado\nconfigurar argumento para -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of("nome do fornecedor"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of("classpath do fornecedor"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of(u"sa\u00edda no estilo RFC"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of("nome do algoritmo de assinatura"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of("alias de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of("senha da chave de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"nome da \u00e1rea de armazenamento de chaves de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"senha protegida da \u00e1rea de armazenamento de chaves de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"nome do fornecedor da \u00e1rea de armazenamento de chaves de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"senha da \u00e1rea de armazenamento de chaves de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"tipo de \u00e1rea de armazenamento de chaves de origem"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of("porta e host do servidor SSL"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("arquivo jar assinado"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of("data/hora inicial de validade do certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"senha da \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"tipo de \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"certificados confi\u00e1veis do cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of(u"sa\u00edda detalhada"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"n\u00famero de dias da validade"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"ID de s\u00e9rie do certificado a ser revogado"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("erro de keytool: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"Op\u00e7\u00e3o inv\u00e1lida:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of(u"Valor inv\u00e1lido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of("Tipo de senha desconhecido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"N\u00e3o \u00e9 poss\u00edvel localizar a vari\u00e1vel do ambiente: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"N\u00e3o \u00e9 poss\u00edvel localizar o arquivo: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of(u"A op\u00e7\u00e3o de comando {0} precisa de um argumento."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Advert\u00eancia: Senhas de chave e de armazenamento diferentes n\u00e3o suportadas para KeyStores PKCS12. Ignorando valor {0} especificado pelo usu\u00e1rio."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"A op\u00e7\u00e3o -keystore ou -storetype n\u00e3o pode ser usada com a op\u00e7\u00e3o -cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of("-keystore deve ser NONE se -storetype for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of(u"Excesso de tentativas de repeti\u00e7\u00e3o; programa finalizado"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"comandos -storepasswd e -keypasswd n\u00e3o suportados se -storetype for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"comandos -keypasswd n\u00e3o suportados se -storetype for PKCS12"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-keypass e -new n\u00e3o podem ser especificados se -storetype for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"se -protected for especificado, ent\u00e3o -storepass, -keypass e -new n\u00e3o dever\u00e3o ser especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"se -srcprotected for especificado, ent\u00e3o -srcstorepass e -srckeypass n\u00e3o dever\u00e3o ser especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"se a \u00e1rea de armazenamento de chaves n\u00e3o estiver protegida por senha, ent\u00e3o -storepass, -keypass e -new n\u00e3o dever\u00e3o ser especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"se a \u00e1rea de armazenamento de chaves de origem n\u00e3o estiver protegida por senha, ent\u00e3o -srcstorepass e -srckeypass n\u00e3o dever\u00e3o ser especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"valor da data inicial inv\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of("A validade deve ser maior do que zero"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s n\u00e3o \u00e9 um fornecedor"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"O fornecedor chamado \"%s\" n\u00e3o foi encontrado"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"Fornecedor \"%s\" n\u00e3o encontrado"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of("Erro de uso: nenhum comando fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"O arquivo da \u00e1rea de armazenamento de chaves de origem existe, mas est\u00e1 vazio: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Especifique -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"N\u00e3o devem ser especificados -v e -rfc com o comando \'list\'"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"A senha da chave deve ter, no m\u00ednimo, 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"A nova senha deve ter, no m\u00ednimo, 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"O arquivo da \u00e1rea de armazenamento de chaves existe, mas est\u00e1 vazio: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"O arquivo da \u00e1rea de armazenamento de chaves n\u00e3o existe. "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of("Deve ser especificado um alias de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of("Deve ser especificado um alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"A senha da \u00e1rea de armazenamento de chaves deve ter, no m\u00ednimo, 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of("Digite a senha a ser armazenada:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"Informe a senha da \u00e1rea de armazenamento de chaves:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"Informe a senha da \u00e1rea de armazenamento de chaves de origem:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"Informe a senha da \u00e1rea de armazenamento de chaves de destino:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"A senha da \u00e1rea de armazenamento de chaves \u00e9 muito curta - ela deve ter, no m\u00ednimo, 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of("Tipo de Entrada Desconhecido"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"Excesso de falhas. Alias n\u00e3o alterado"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"Entrada do alias {0} importada com \u00eaxito."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"Entrada do alias {0} n\u00e3o importada."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"Problema ao importar a entrada do alias {0}: {1}.\nEntrada do alias {0} n\u00e3o importada."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"Comando de importa\u00e7\u00e3o conclu\u00eddo:  {0} entradas importadas com \u00eaxito, {1} entradas falharam ou foram canceladas"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"Advert\u00eancia: Substitui\u00e7\u00e3o do alias {0} existente na \u00e1rea de armazenamento de chaves de destino"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"Entrada j\u00e1 existente no alias {0}, substituir? [n\u00e3o]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of("Excesso de falhas - tente mais tarde"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"Solicita\u00e7\u00e3o de certificado armazenada no arquivo <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"Submeter \u00e0 CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"se o alias n\u00e3o estiver especificado, destalias e srckeypass n\u00e3o dever\u00e3o ser especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of("O armazenamento de chaves pkcs12 de destino tem storepass e keypass diferentes. Tente novamente especificando -destkeypass."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of("Certificado armazenado no arquivo <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"A resposta do certificado foi instalada na \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"A resposta do certificado n\u00e3o foi instalada na \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"O certificado foi adicionado \u00e0 \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"O certificado n\u00e3o foi adicionado \u00e0 \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[Armazenando {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0} n\u00e3o tem chave p\u00fablica (certificado)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"N\u00e3o \u00e9 poss\u00edvel obter um algoritmo de assinatura"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of(u"O alias <{0}> n\u00e3o existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"O alias <{0}> n\u00e3o tem certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"Par de chaves n\u00e3o gerado; o alias <{0}> j\u00e1 existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of("Gerando o par de chaves {1} de {0} bit e o certificado autoassinado ({2}) com uma validade de {3} dias\n\tpara: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of("Informar a senha da chave de <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(RETURN se for igual \u00e0 senha da \u00e1rea do armazenamento de chaves):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"A senha da chave \u00e9 muito curta - deve ter, no m\u00ednimo, 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"Excesso de falhas - chave n\u00e3o adicionada a \u00e1rea de armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"O alias de destino <{0}> j\u00e1 existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"A senha \u00e9 muito curta - deve ter, no m\u00ednimo, 6 caracteres"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"Excesso de falhas. Entrada da chave n\u00e3o clonada"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of("senha da chave de <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"A entrada da \u00e1rea do armazenamento de chaves de <{0}> j\u00e1 existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"Criando entrada da \u00e1rea do armazenamento de chaves para <{0}> ..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of("Nenhuma entrada adicionada do banco de dados de identidades"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Nome do alias: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"Data de cria\u00e7\u00e3o: {0,date}"_s)
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
			$of("Tipo de entrada: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of("Comprimento da cadeia de certificados: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Certificado[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Fingerprint (SHA-256) do certificado: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"Tipo de \u00e1rea de armazenamento de chaves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"Fornecedor da \u00e1rea de armazenamento de chaves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"Sua \u00e1rea de armazenamento de chaves cont\u00e9m {0,number,integer} entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"Sua \u00e1rea de armazenamento de chaves cont\u00e9m {0,number,integer} entradas"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of("Falha durante o parsing da entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of("Entrada vazia"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of(u"N\u00e3o \u00e9 um certificado X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0} n\u00e3o tem chave p\u00fablica"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0} n\u00e3o tem certificado X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of("Novo certificado (autoassinado):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"A resposta n\u00e3o tem certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"Certificado n\u00e3o importado, o alias <{0}> j\u00e1 existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"A entrada n\u00e3o \u00e9 um certificado X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"O certificado j\u00e1 existe no armazenamento de chaves no alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of(u"Ainda deseja adicion\u00e1-lo? [n\u00e3o]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"O certificado j\u00e1 existe na \u00e1rea de armazenamento de chaves da CA em todo o sistema no alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"Ainda deseja adicion\u00e1-lo \u00e0 sua \u00e1rea de armazenamento de chaves? [n\u00e3o]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"Confiar neste certificado? [n\u00e3o]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of("SIM"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("Nova {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of("As senhas devem ser diferentes"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Informe novamente a nova {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of("Redigite a senha: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of("Informe novamente a nova senha: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"Elas n\u00e3o correspondem. Tente novamente"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of("Informe o nome do alias {0}:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"Informe o novo nome do alias\t(RETURN para cancelar a importa\u00e7\u00e3o desta entrada):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Informe o nome do alias:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of("\t(RETURN se for igual ao de <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"Qual \u00e9 o seu nome e o seu sobrenome?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"Qual \u00e9 o nome da sua unidade organizacional?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of(u"Qual \u00e9 o nome da sua empresa?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"Qual \u00e9 o nome da sua Cidade ou Localidade?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"Qual \u00e9 o nome do seu Estado ou Munic\u00edpio?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"Quais s\u00e3o as duas letras do c\u00f3digo do pa\u00eds desta unidade?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of(u"{0} Est\u00e1 correto?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"n\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("sim"_s)
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
			$of(u"O alias <{0}> n\u00e3o tem chave"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"O alias <{0}> faz refer\u00eancia a um tipo de entrada que n\u00e3o \u00e9 uma entrada de chave privada. O comando -keyclone oferece suporte somente \u00e0 clonagem de entradas de chave privada"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"Signat\u00e1rio #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of("Timestamp:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Assinatura:"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of("CRLs:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"Propriet\u00e1rio do certificado: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"N\u00e3o \u00e9 um arquivo jar assinado"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of(u"N\u00e3o \u00e9 um certificado do servidor SSL"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* A integridade das informa\u00e7\u00f5es armazenadas na sua \u00e1rea de armazenamento de chaves  *\n* N\u00c3O foi verificada!  Para que seja poss\u00edvel verificar sua integridade, *\n* voc\u00ea deve fornecer a senha da \u00e1rea de armazenamento de chaves.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* A integridade das informa\u00e7\u00f5es armazenadas no srckeystore  *\n* N\u00c3O foi verificada!  Para que seja poss\u00edvel verificar sua integridade, *\n* voc\u00ea deve fornecer a senha do srckeystore.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"A resposta do certificado n\u00e3o cont\u00e9m a chave p\u00fablica de <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of("Cadeia de certificados incompleta na resposta"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"A cadeia de certificados da resposta n\u00e3o verifica: "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"Certificado de n\u00edvel superior na resposta:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... n\u00e3o \u00e9 confi\u00e1vel. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"Instalar resposta assim mesmo? [n\u00e3o]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u00c3O"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"As chaves p\u00fablicas da resposta e da \u00e1rea de armazenamento de chaves n\u00e3o correspondem"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"O certificado da resposta e o certificado da \u00e1rea de armazenamento de chaves s\u00e3o id\u00eanticos"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of("Falha ao estabelecer a cadeia a partir da resposta"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of("Resposta errada; tente novamente"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"Chave secreta n\u00e3o gerada; o alias <{0}> j\u00e1 existe"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"Forne\u00e7a o -keysize para a gera\u00e7\u00e3o da chave secreta"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"ADVERT\u00caNCIA: n\u00e3o verificado. Certifique-se que -keystore esteja correto."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"Extens\u00f5es: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of("(Valor vazio)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of(u"Solicita\u00e7\u00e3o de Extens\u00e3o:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of("Tipo de keyUsage desconhecido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of("Tipo de extendedkeyUsage desconhecido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of("Tipo de AccessDescription desconhecido: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of(u"Tipo de GeneralName n\u00e3o reconhecido: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"Esta extens\u00e3o n\u00e3o pode ser marcada como cr\u00edtica. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"Encontrado n\u00famero \u00edmpar de seis d\u00edgitos: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of(u"Tipo de extens\u00e3o desconhecido: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"o comando {0} \u00e9 amb\u00edguo:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of(u"A solicita\u00e7\u00e3o do certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of("O emissor"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("O certificado gerado"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of("A CRL gerada"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"A solicita\u00e7\u00e3o do certificado gerada"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("O certificado"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("A CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("O certificado TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of("A entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of("Resposta"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d de %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of("Emissor <%s> no cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of("Emissor <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (fraca)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of("Chave %2$s de %1$d bits"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of("Chave %2$s de %1$d bits (fraca)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of("chave de tamanho desconhecido  %s"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"Propriet\u00e1rio: {0}\nEmissor: {1}\nN\u00famero de s\u00e9rie: {2}\nV\u00e1lido de: {3} at\u00e9: {4}\nFingerprints do certificado:\n\t SHA1: {5}\n\t SHA256: {6}\nNome do algoritmo de assinatura: {7}\nAlgoritmo de Chave P\u00fablica do Assunto: {8}\nVers\u00e3o: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"Solicita\u00e7\u00e3o do Certificado PKCS #10 (Vers\u00e3o 1.0)\nAssunto: %1$s\nFormato: %2$s\nChave P\u00fablica: %3$s\nAlgoritmo de assinatura: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Verificado por %1$s em %2$s com um %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s usa o algoritmo de assinatura %2$s que \u00e9 considerado um risco \u00e0 seguran\u00e7a."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s usa um %2$s que \u00e9 considerado um risco \u00e0 seguran\u00e7a."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"O armazenamento de chaves %1$s usa um formato propriet\u00e1rio. \u00c9 recomendada a migra\u00e7\u00e3o para PKCS12, que \u00e9 um formato de padr\u00e3o industrial que usa \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"\"%1$s\" foi migrado para %4$s. O backup do armazenamento de chaves %2$s \u00e9 feito como \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"O backup do armazenamento de chaves original \"%1$s\" \u00e9 feito como \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of("Importando armazenamento de chaves %1$s to %2$s..."_s)
		})
	}));
}

Resources_pt_BR::Resources_pt_BR() {
}

$Class* Resources_pt_BR::load$($String* name, bool initialize) {
	$loadClass(Resources_pt_BR, name, initialize, &_Resources_pt_BR_ClassInfo_, clinit$Resources_pt_BR, allocate$Resources_pt_BR);
	return class$;
}

$Class* Resources_pt_BR::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun