#include <sun/security/tools/keytool/Resources.h>
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

$ObjectArray2* Resources::contents = nullptr;

void Resources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources::getContents() {
	return Resources::contents;
}

void Resources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources::contents, $new($ObjectArray2, {
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
			"Options:"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			"The %s option is specified multiple times. All except the last one will be ignored."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			"Only one command is allowed: both %1$s and %2$s were specified."_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			"Use \"keytool -?, -h, or --help\" for this help message"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			"Key and Certificate Management Tool"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Commands:"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			"Use \"keytool -command_name --help\" for usage of command_name.\nUse the -conf <url> option to specify a pre-configured options file."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			"Generates a certificate request"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			"Changes an entry\'s alias"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			"Deletes an entry"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Exports certificate"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			"Generates a key pair"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			"Generates a secret key"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			"Generates certificate from a certificate request"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			"Generates CRL"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			"Generated {0} secret key"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			"Generated {0}-bit {1} secret key"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			"Imports entries from a JDK 1.1.x-style identity database"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			"Imports a certificate or a certificate chain"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			"Imports a password"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			"Imports one or all entries from another keystore"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			"Clones a key entry"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			"Changes the key password of an entry"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			"Lists entries in a keystore"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			"Prints the content of a certificate"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			"Prints the content of a certificate request"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			"Prints the content of a CRL file"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			"Generates a self-signed certificate"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			"Changes the store password of a keystore"_s
		}),
		$$new($ObjectArray, {
			"showinfo.command.help"_s,
			"Displays security-related information"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			"alias name of the entry to process"_s
		}),
		$$new($ObjectArray, {
			"groupname.option.help"_s,
			"Group name. For example, an Elliptic Curve name."_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"destination alias"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			"destination key password"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			"destination keystore name"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			"destination keystore password protected"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			"destination keystore provider name"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			"destination keystore password"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			"destination keystore type"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"distinguished name"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			"X.509 extension"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			"output file name"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			"input file name"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			"key algorithm name"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			"key password"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			"key bit size"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			"keystore name"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			"access the cacerts keystore"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			"Warning: use -cacerts option to access cacerts keystore"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			"new password"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			"do not prompt"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			"password through protected mechanism"_s
		}),
		$$new($ObjectArray, {
			"tls.option.help"_s,
			"Displays TLS configuration information"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			"add security provider by name (e.g. SunPKCS11)\nconfigure argument for -addprovider"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			"add security provider by fully-qualified class name\nconfigure argument for -providerclass"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			"provider name"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			"provider classpath"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			"output in RFC style"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			"signature algorithm name"_s
		}),
		$$new($ObjectArray, {
			"signer.alias"_s,
			"signer alias"_s
		}),
		$$new($ObjectArray, {
			"signer.key.password"_s,
			"signer key password"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			"source alias"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			"source key password"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			"source keystore name"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			"source keystore password protected"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			"source keystore provider name"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			"source keystore password"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			"source keystore type"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			"SSL server host and port"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			"signed jar file"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			"certificate validity start date/time"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			"keystore password"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			"keystore type"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			"trust certificates from cacerts"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			"verbose output"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			"validity number of days"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			"Serial ID of cert to revoke"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"keytool error: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			"Illegal option:  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			"Illegal value: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			"Unknown password type: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			"Cannot find environment variable: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"Cannot find file: "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			"Command option {0} needs an argument."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			"Warning:  Different store and key passwords not supported for PKCS12 KeyStores. Ignoring user-specified {0} value."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			"The -keystore or -storetype option cannot be used with the -cacerts option"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			"-keystore must be NONE if -storetype is {0}"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			"Too many retries, program terminated"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			"-storepasswd and -keypasswd commands not supported if -storetype is {0}"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			"-keypasswd commands not supported if -storetype is PKCS12"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			"-keypass and -new can not be specified if -storetype is {0}"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			"if -protected is specified, then -storepass, -keypass, and -new must not be specified"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			"if -srcprotected is specified, then -srcstorepass and -srckeypass must not be specified"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			"if keystore is not password protected, then -storepass, -keypass, and -new must not be specified"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			"if source keystore is not password protected, then -srcstorepass and -srckeypass must not be specified"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			"Illegal startdate value"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			"Validity must be greater than zero"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			"%s not a provider"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			"Provider named \"%s\" not found"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			"Provider \"%s\" not found"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			"Usage error: no command provided"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			"Source keystore file exists, but is empty: "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Please specify -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			"Must not specify both -v and -rfc with \'list\' command"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			"Key password must be at least 6 characters"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			"New password must be at least 6 characters"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			"Keystore file exists, but is empty: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			"Keystore file does not exist: "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			"Must specify destination alias"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			"Must specify alias"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			"Keystore password must be at least 6 characters"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			"Enter the password to be stored:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			"Enter keystore password:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			"Enter source keystore password:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			"Enter destination keystore password:  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			"Keystore password is too short - must be at least 6 characters"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			"Unknown Entry Type"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			"Entry for alias {0} successfully imported."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			"Entry for alias {0} not imported."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			"Problem importing entry for alias {0}: {1}.\nEntry for alias {0} not imported."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			"Import command completed:  {0} entries successfully imported, {1} entries failed or cancelled"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			"Warning: Overwriting existing alias {0} in destination keystore"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			"Existing entry alias {0} exists, overwrite? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			"Too many failures - try later"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			"Certification request stored in file <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			"Submit this to your CA"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			"if alias not specified, destalias and srckeypass must not be specified"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			"The destination pkcs12 keystore has different storepass and keypass. Please retry with -destkeypass specified."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			"Certificate stored in file <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			"Certificate reply was installed in keystore"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			"Certificate reply was not installed in keystore"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			"Certificate was added to keystore"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			"Certificate was not added to keystore"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[Storing {0}]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			"{0} has no public key (certificate)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			"Cannot derive signature algorithm"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			"Alias <{0}> does not exist"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			"Alias <{0}> has no certificate"_s
		}),
		$$new($ObjectArray, {
			"groupname.keysize.coexist"_s,
			"Cannot specify both -groupname and -keysize"_s
		}),
		$$new($ObjectArray, {
			"deprecate.keysize.for.ec"_s,
			"Specifying -keysize for generating EC keys is deprecated, please use \"-groupname %s\" instead."_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			"Key pair not generated, alias <{0}> already exists"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			"Generating {0} bit {1} key pair and self-signed certificate ({2}) with a validity of {3} days\n\tfor: {4}"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.a.certificate.sigAlgName.issued.by.signerAlias.with.a.validity.of.validality.days.for"_s,
			"Generating {0} bit {1} key pair and a certificate ({2}) issued by <{3}> with a validity of {4} days\n\tfor: {5}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			"Enter key password for <{0}>"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			"\t(RETURN if same as keystore password):  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			"Key password is too short - must be at least 6 characters"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			"Too many failures - key not added to keystore"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			"Destination alias <{0}> already exists"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			"Password is too short - must be at least 6 characters"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			"Too many failures. Key entry not cloned"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			"key password for <{0}>"_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			"No entries from identity database added"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Alias name: {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			"Creation date: {0,date}"_s
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
			"Entry type: {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			"Certificate chain length: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Certificate[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Certificate fingerprint (SHA-256): "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			"Keystore type: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			"Keystore provider: "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			"Your keystore contains {0,number,integer} entry"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			"Your keystore contains {0,number,integer} entries"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			"Failed to parse input"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			"Empty input"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			"Not X.509 certificate"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			"{0} has no public key"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			"{0} has no X.509 certificate"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			"New certificate (self-signed):"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			"Reply has no certificates"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			"Certificate not imported, alias <{0}> already exists"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			"Input not an X.509 certificate"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			"Certificate already exists in keystore under alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			"Do you still want to add it? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			"Certificate already exists in system-wide CA keystore under alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			"Do you still want to add it to your own keystore? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			"Trust this certificate? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"New {0}: "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			"Passwords must differ"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Re-enter new {0}: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			"Re-enter password: "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			"Re-enter new password: "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			"They don\'t match. Try again"_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			"Enter {0} alias name:  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			"Enter new alias name\t(RETURN to cancel import for this entry):  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Enter alias name:  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			"\t(RETURN if same as for <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			"What is your first and last name?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			"What is the name of your organizational unit?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			"What is the name of your organization?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			"What is the name of your City or Locality?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			"What is the name of your State or Province?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			"What is the two-letter country code for this unit?"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			"Is {0} correct?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"no"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			"yes"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"y"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			"Alias <{0}> has no key"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			"Alias <{0}> references an entry type that is not a private key entry.  The -keyclone command only supports cloning of private key entries"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			"Signer #%d:"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			"Timestamp:"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Signature:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			"Certificate owner: "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			"Not a signed jar file"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			"No certificate from the SSL server"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			"* The integrity of the information stored in your keystore  *\n* has NOT been verified!  In order to verify its integrity, *\n* you must provide your keystore password.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			"* The integrity of the information stored in the srckeystore*\n* has NOT been verified!  In order to verify its integrity, *\n* you must provide the srckeystore password.                *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			"Certificate reply does not contain public key for <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			"Incomplete certificate chain in reply"_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			"Top-level certificate in reply:\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			"... is not trusted. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			"Install reply anyway? [no]:  "_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			"Public keys in reply and keystore don\'t match"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			"Certificate reply and certificate in keystore are identical"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			"Failed to establish chain from reply"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			"Wrong answer, try again"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			"Secret Key not generated, alias <{0}> already exists"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			"Please provide -keysize for secret key generation"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			"WARNING: not verified. Make sure -keystore is correct."_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s,
			"WARNING: not verified. Make sure -keystore is correct or specify -trustcacerts."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			"Extensions: "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			"(Empty value)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			"Extension Request:"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			"Unknown keyUsage type: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			"Unknown extendedkeyUsage type: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			"Unknown AccessDescription type: "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			"Unrecognized GeneralName type: "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			"This extension cannot be marked as critical. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			"Odd number of hex digits found: "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			"Unknown extension type: "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			"command {0} is ambiguous:"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			"The certificate request"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			"The issuer"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			"The generated certificate"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			"The generated CRL"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			"The generated certificate request"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"The certificate"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			"The CRL"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"The TSA certificate"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			"The input"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			"Reply"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d of %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			"Issuer <%s> in cacerts"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			"Issuer <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (weak)"_s
		}),
		$$new($ObjectArray, {
			"with.disabled"_s,
			"%s (disabled)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			"%1$d-bit %2$s key"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			"%1$d-bit %2$s key (weak)"_s
		}),
		$$new($ObjectArray, {
			"key.bit.disabled"_s,
			"%1$d-bit %2$s key (disabled)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			"%s key of unknown size"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			"Owner: {0}\nIssuer: {1}\nSerial number: {2}\nValid from: {3} until: {4}\nCertificate fingerprints:\n\t SHA1: {5}\n\t SHA256: {6}\nSignature algorithm name: {7}\nSubject Public Key Algorithm: {8}\nVersion: {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			"PKCS #10 Certificate Request (Version 1.0)\nSubject: %1$s\nFormat: %2$s\nPublic Key: %3$s\nSignature algorithm: %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			"Verified by %1$s in %2$s with a %3$s"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.disabled"_s,
			"%1$s uses the %2$s signature algorithm which is considered a security risk and is disabled."_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.weak"_s,
			"%1$s uses the %2$s signature algorithm which is considered a security risk. This algorithm will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"whose.key.disabled"_s,
			"%1$s uses a %2$s which is considered a security risk and is disabled."_s
		}),
		$$new($ObjectArray, {
			"whose.key.weak"_s,
			"%1$s uses a %2$s which is considered a security risk. This key size will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			"The %1$s keystore uses a proprietary format. It is recommended to migrate to PKCS12 which is an industry standard format using \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			"Migrated \"%1$s\" to %4$s. The %2$s keystore is backed up as \"%3$s\"."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			"The original keystore \"%1$s\" is backed up as \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			"Importing keystore %1$s to %2$s..."_s
		}),
		$$new($ObjectArray, {
			"keyalg.option.missing.error"_s,
			"The -keyalg option must be specified."_s
		}),
		$$new($ObjectArray, {
			"showinfo.no.option"_s,
			"Missing option for -showinfo. Try \"keytool -showinfo -tls\"."_s
		})
	}));
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources, name, initialize, &classInfo$$, Resources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources);
	});
	return class$;
}

$Class* Resources::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun