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

$ObjectArray2* Resources_pt_BR::contents = nullptr;

void Resources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_pt_BR::getContents() {
	return Resources_pt_BR::contents;
}

void Resources_pt_BR::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_pt_BR::contents, $new($ObjectArray2, {
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
			u"Opções:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"A opção %s foi especificada várias vezes. Todas, exceto a última, serão ignoradas."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"Somente um comando é permitido: tanto %1$s quanto %2$s foram especificados."_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			u"Use \"keytool -help\" para todos os comandos disponíveis"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			"Ferramenta de Gerenciamento de Chave e Certificado"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Comandos:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"Utilize \"keytool -command_name -help\" para uso de command_name.\nUtilize a opção -conf <url> para especificar um arquivo de opções pré-configurado."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			u"Gera uma solicitação de certificado"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			"Altera um alias de entrada"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			"Exclui uma entrada"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Exporta o certificado"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			"Gera um par de chaves"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			"Gera uma chave secreta"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			u"Gera um certificado de uma solicitação de certificado"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			"Gera CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			"Chave secreta {0} gerada"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			"Chave secreta {1} de {0} bits gerada"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			"Importa entradas de um banco de dados de identidade JDK 1.1.x-style"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			"Importa um certificado ou uma cadeia de certificados"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			"Importa uma senha"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"Importa uma ou todas as entradas de outra área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			"Clona uma entrada de chave"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			"Altera a senha da chave de uma entrada"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"Lista entradas em uma área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			u"Imprime o conteúdo de um certificado"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			u"Imprime o conteúdo de uma solicitação de certificado"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			u"Imprime o conteúdo de um arquivo CRL"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			"Gera um certificado autoassinado"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"Altera a senha de armazenamento de uma área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			"nome do alias da entrada a ser processada"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"alias de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			"senha da chave de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			u"nome da área de armazenamento de chaves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"senha protegida da área de armazenamento de chaves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			u"nome do fornecedor da área de armazenamento de chaves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			u"senha da área de armazenamento de chaves de destino"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			u"tipo de área de armazenamento de chaves de destino"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"nome distinto"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			u"extensão X.509"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			u"nome do arquivo de saída"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			"nome do arquivo de entrada"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			"nome do algoritmo da chave"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			"senha da chave"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			"tamanho do bit da chave"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			u"nome da área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			u"acessar a área de armazenamento de chaves cacerts"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"Advertência: use a opção -cacerts para acessar a área de armazenamento de chaves cacerts"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			"nova senha"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			u"não perguntar"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			"senha por meio de mecanismo protegido"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			u"adicionar provedor de segurança por nome (por exemplo, SunPKCS11)\nconfigurar argumento para -addprovider"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			u"adicionar provedor de segurança por nome de classe totalmente qualificado\nconfigurar argumento para -providerclass"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			"nome do fornecedor"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			"classpath do fornecedor"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			u"saída no estilo RFC"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			"nome do algoritmo de assinatura"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			"alias de origem"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			"senha da chave de origem"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			u"nome da área de armazenamento de chaves de origem"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"senha protegida da área de armazenamento de chaves de origem"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			u"nome do fornecedor da área de armazenamento de chaves de origem"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			u"senha da área de armazenamento de chaves de origem"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			u"tipo de área de armazenamento de chaves de origem"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			"porta e host do servidor SSL"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			"arquivo jar assinado"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			"data/hora inicial de validade do certificado"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			u"senha da área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			u"tipo de área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			u"certificados confiáveis do cacerts"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			u"saída detalhada"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"número de dias da validade"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			u"ID de série do certificado a ser revogado"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"erro de keytool: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"Opção inválida:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			u"Valor inválido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			"Tipo de senha desconhecido: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			u"Não é possível localizar a variável do ambiente: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			u"Não é possível localizar o arquivo: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			u"A opção de comando {0} precisa de um argumento."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"Advertência: Senhas de chave e de armazenamento diferentes não suportadas para KeyStores PKCS12. Ignorando valor {0} especificado pelo usuário."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"A opção -keystore ou -storetype não pode ser usada com a opção -cacerts"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			"-keystore deve ser NONE se -storetype for {0}"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			u"Excesso de tentativas de repetição; programa finalizado"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"comandos -storepasswd e -keypasswd não suportados se -storetype for {0}"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"comandos -keypasswd não suportados se -storetype for PKCS12"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"-keypass e -new não podem ser especificados se -storetype for {0}"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"se -protected for especificado, então -storepass, -keypass e -new não deverão ser especificados"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"se -srcprotected for especificado, então -srcstorepass e -srckeypass não deverão ser especificados"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"se a área de armazenamento de chaves não estiver protegida por senha, então -storepass, -keypass e -new não deverão ser especificados"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"se a área de armazenamento de chaves de origem não estiver protegida por senha, então -srcstorepass e -srckeypass não deverão ser especificados"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			u"valor da data inicial inválido"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			"A validade deve ser maior do que zero"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			u"%s não é um fornecedor"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"O fornecedor chamado \"%s\" não foi encontrado"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			u"Fornecedor \"%s\" não encontrado"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			"Erro de uso: nenhum comando fornecido"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"O arquivo da área de armazenamento de chaves de origem existe, mas está vazio: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Especifique -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u"Não devem ser especificados -v e -rfc com o comando \'list\'"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"A senha da chave deve ter, no mínimo, 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			u"A nova senha deve ter, no mínimo, 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"O arquivo da área de armazenamento de chaves existe, mas está vazio: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			u"O arquivo da área de armazenamento de chaves não existe. "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			"Deve ser especificado um alias de destino"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			"Deve ser especificado um alias"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			u"A senha da área de armazenamento de chaves deve ter, no mínimo, 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			"Digite a senha a ser armazenada:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			u"Informe a senha da área de armazenamento de chaves:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			u"Informe a senha da área de armazenamento de chaves de origem:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			u"Informe a senha da área de armazenamento de chaves de destino:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"A senha da área de armazenamento de chaves é muito curta - ela deve ter, no mínimo, 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			"Tipo de Entrada Desconhecido"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			u"Excesso de falhas. Alias não alterado"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"Entrada do alias {0} importada com êxito."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"Entrada do alias {0} não importada."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"Problema ao importar a entrada do alias {0}: {1}.\nEntrada do alias {0} não importada."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"Comando de importação concluído:  {0} entradas importadas com êxito, {1} entradas falharam ou foram canceladas"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"Advertência: Substituição do alias {0} existente na área de armazenamento de chaves de destino"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"Entrada já existente no alias {0}, substituir? [não]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			"Excesso de falhas - tente mais tarde"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"Solicitação de certificado armazenada no arquivo <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			u"Submeter à CA"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			u"se o alias não estiver especificado, destalias e srckeypass não deverão ser especificados"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			"O armazenamento de chaves pkcs12 de destino tem storepass e keypass diferentes. Tente novamente especificando -destkeypass."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			"Certificado armazenado no arquivo <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			u"A resposta do certificado foi instalada na área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			u"A resposta do certificado não foi instalada na área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"O certificado foi adicionado à área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"O certificado não foi adicionado à área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[Armazenando {0}]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			u"{0} não tem chave pública (certificado)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			u"Não é possível obter um algoritmo de assinatura"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			u"O alias <{0}> não existe"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			u"O alias <{0}> não tem certificado"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			u"Par de chaves não gerado; o alias <{0}> já existe"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			"Gerando o par de chaves {1} de {0} bit e o certificado autoassinado ({2}) com uma validade de {3} dias\n\tpara: {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			"Informar a senha da chave de <{0}>"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			u"\t(RETURN se for igual à senha da área do armazenamento de chaves):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"A senha da chave é muito curta - deve ter, no mínimo, 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"Excesso de falhas - chave não adicionada a área de armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			u"O alias de destino <{0}> já existe"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"A senha é muito curta - deve ter, no mínimo, 6 caracteres"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"Excesso de falhas. Entrada da chave não clonada"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			"senha da chave de <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"A entrada da área do armazenamento de chaves de <{0}> já existe"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			u"Criando entrada da área do armazenamento de chaves para <{0}> ..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			"Nenhuma entrada adicionada do banco de dados de identidades"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Nome do alias: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			u"Data de criação: {0,date}"_s
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
			"Tipo de entrada: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			"Comprimento da cadeia de certificados: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Certificado[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Fingerprint (SHA-256) do certificado: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			u"Tipo de área de armazenamento de chaves: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			u"Fornecedor da área de armazenamento de chaves: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"Sua área de armazenamento de chaves contém {0,number,integer} entrada"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"Sua área de armazenamento de chaves contém {0,number,integer} entradas"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			"Falha durante o parsing da entrada"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			"Entrada vazia"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			u"Não é um certificado X.509"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			u"{0} não tem chave pública"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			u"{0} não tem certificado X.509"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			"Novo certificado (autoassinado):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			u"A resposta não tem certificado"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			u"Certificado não importado, o alias <{0}> já existe"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			u"A entrada não é um certificado X.509"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			u"O certificado já existe no armazenamento de chaves no alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			u"Ainda deseja adicioná-lo? [não]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"O certificado já existe na área de armazenamento de chaves da CA em todo o sistema no alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"Ainda deseja adicioná-lo à sua área de armazenamento de chaves? [não]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			u"Confiar neste certificado? [não]:  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			"SIM"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"Nova {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			"As senhas devem ser diferentes"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Informe novamente a nova {0}: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			"Redigite a senha: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			"Informe novamente a nova senha: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"Elas não correspondem. Tente novamente"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			"Informe o nome do alias {0}:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			u"Informe o novo nome do alias\t(RETURN para cancelar a importação desta entrada):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Informe o nome do alias:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			"\t(RETURN se for igual ao de <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			u"Qual é o seu nome e o seu sobrenome?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			u"Qual é o nome da sua unidade organizacional?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			u"Qual é o nome da sua empresa?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			u"Qual é o nome da sua Cidade ou Localidade?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			u"Qual é o nome do seu Estado ou Município?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"Quais são as duas letras do código do país desta unidade?"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			u"{0} Está correto?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			u"não"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			"sim"_s
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
			u"O alias <{0}> não tem chave"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"O alias <{0}> faz referência a um tipo de entrada que não é uma entrada de chave privada. O comando -keyclone oferece suporte somente à clonagem de entradas de chave privada"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			u"Signatário #%d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			"Timestamp:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Assinatura:"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			"CRLs:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			u"Proprietário do certificado: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			u"Não é um arquivo jar assinado"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			u"Não é um certificado do servidor SSL"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* A integridade das informações armazenadas na sua área de armazenamento de chaves  *\n* NÃO foi verificada!  Para que seja possível verificar sua integridade, *\n* você deve fornecer a senha da área de armazenamento de chaves.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* A integridade das informações armazenadas no srckeystore  *\n* NÃO foi verificada!  Para que seja possível verificar sua integridade, *\n* você deve fornecer a senha do srckeystore.                  *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"A resposta do certificado não contém a chave pública de <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			"Cadeia de certificados incompleta na resposta"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			u"A cadeia de certificados da resposta não verifica: "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			u"Certificado de nível superior na resposta:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"... não é confiável. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			u"Instalar resposta assim mesmo? [não]:  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			u"NÃO"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			u"As chaves públicas da resposta e da área de armazenamento de chaves não correspondem"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			u"O certificado da resposta e o certificado da área de armazenamento de chaves são idênticos"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			"Falha ao estabelecer a cadeia a partir da resposta"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			"Resposta errada; tente novamente"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			u"Chave secreta não gerada; o alias <{0}> já existe"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			u"Forneça o -keysize para a geração da chave secreta"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"ADVERTÊNCIA: não verificado. Certifique-se que -keystore esteja correto."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			u"Extensões: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			"(Valor vazio)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			u"Solicitação de Extensão:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			"Tipo de keyUsage desconhecido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			"Tipo de extendedkeyUsage desconhecido: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			"Tipo de AccessDescription desconhecido: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			u"Tipo de GeneralName não reconhecido: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			u"Esta extensão não pode ser marcada como crítica. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"Encontrado número ímpar de seis dígitos: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			u"Tipo de extensão desconhecido: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			u"o comando {0} é ambíguo:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			u"A solicitação do certificado"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			"O emissor"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			"O certificado gerado"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			"A CRL gerada"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			u"A solicitação do certificado gerada"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"O certificado"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"A CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"O certificado TSA"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			"A entrada"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			"Resposta"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d de %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			"Emissor <%s> no cacerts"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			"Emissor <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (fraca)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			"Chave %2$s de %1$d bits"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			"Chave %2$s de %1$d bits (fraca)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			"chave de tamanho desconhecido  %s"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"Proprietário: {0}\nEmissor: {1}\nNúmero de série: {2}\nVálido de: {3} até: {4}\nFingerprints do certificado:\n\t SHA1: {5}\n\t SHA256: {6}\nNome do algoritmo de assinatura: {7}\nAlgoritmo de Chave Pública do Assunto: {8}\nVersão: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			u"Solicitação do Certificado PKCS #10 (Versão 1.0)\nAssunto: %1$s\nFormato: %2$s\nChave Pública: %3$s\nAlgoritmo de assinatura: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			"Verificado por %1$s em %2$s com um %3$s"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			u"%1$s usa o algoritmo de assinatura %2$s que é considerado um risco à segurança."_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			u"%1$s usa um %2$s que é considerado um risco à segurança."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"O armazenamento de chaves %1$s usa um formato proprietário. É recomendada a migração para PKCS12, que é um formato de padrão industrial que usa \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			u"\"%1$s\" foi migrado para %4$s. O backup do armazenamento de chaves %2$s é feito como \"%3$s\"."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"O backup do armazenamento de chaves original \"%1$s\" é feito como \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			"Importando armazenamento de chaves %1$s to %2$s..."_s
		})
	}));
}

Resources_pt_BR::Resources_pt_BR() {
}

$Class* Resources_pt_BR::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_pt_BR, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_pt_BR, name, initialize, &classInfo$$, Resources_pt_BR::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_pt_BR);
	});
	return class$;
}

$Class* Resources_pt_BR::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun