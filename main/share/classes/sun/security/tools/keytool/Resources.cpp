#include <sun/security/tools/keytool/Resources.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Resources_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources, contents)},
	{}
};

$MethodInfo _Resources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources::*)()>(&Resources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_FieldInfo_,
	_Resources_MethodInfo_
};

$Object* allocate$Resources($Class* clazz) {
	return $of($alloc(Resources));
}

$ObjectArray2* Resources::contents = nullptr;

void Resources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources::getContents() {
	return Resources::contents;
}

void clinit$Resources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources::contents, $new($ObjectArray2, {
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
			$of("Options:"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of("The %s option is specified multiple times. All except the last one will be ignored."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of("Only one command is allowed: both %1$s and %2$s were specified."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of("Use \"keytool -?, -h, or --help\" for this help message"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of("Key and Certificate Management Tool"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Commands:"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of("Use \"keytool -command_name --help\" for usage of command_name.\nUse the -conf <url> option to specify a pre-configured options file."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of("Generates a certificate request"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of("Changes an entry\'s alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of("Deletes an entry"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Exports certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of("Generates a key pair"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of("Generates a secret key"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of("Generates certificate from a certificate request"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of("Generates CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of("Generated {0} secret key"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of("Generated {0}-bit {1} secret key"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of("Imports entries from a JDK 1.1.x-style identity database"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of("Imports a certificate or a certificate chain"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of("Imports a password"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of("Imports one or all entries from another keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of("Clones a key entry"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of("Changes the key password of an entry"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of("Lists entries in a keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of("Prints the content of a certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of("Prints the content of a certificate request"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of("Prints the content of a CRL file"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of("Generates a self-signed certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of("Changes the store password of a keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.command.help"_s),
			$of("Displays security-related information"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of("alias name of the entry to process"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.option.help"_s),
			$of("Group name. For example, an Elliptic Curve name."_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("destination alias"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of("destination key password"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of("destination keystore name"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of("destination keystore password protected"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of("destination keystore provider name"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of("destination keystore password"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of("destination keystore type"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("distinguished name"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of("X.509 extension"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of("output file name"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of("input file name"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of("key algorithm name"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of("key password"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of("key bit size"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of("keystore name"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of("access the cacerts keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of("Warning: use -cacerts option to access cacerts keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of("new password"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of("do not prompt"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of("password through protected mechanism"_s)
		}),
		$$new($ObjectArray, {
			$of("tls.option.help"_s),
			$of("Displays TLS configuration information"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of("add security provider by name (e.g. SunPKCS11)\nconfigure argument for -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of("add security provider by fully-qualified class name\nconfigure argument for -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of("provider name"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of("provider classpath"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("output in RFC style"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of("signature algorithm name"_s)
		}),
		$$new($ObjectArray, {
			$of("signer.alias"_s),
			$of("signer alias"_s)
		}),
		$$new($ObjectArray, {
			$of("signer.key.password"_s),
			$of("signer key password"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of("source alias"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of("source key password"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of("source keystore name"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of("source keystore password protected"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of("source keystore provider name"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of("source keystore password"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of("source keystore type"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of("SSL server host and port"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of("signed jar file"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of("certificate validity start date/time"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of("keystore password"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of("keystore type"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of("trust certificates from cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of("verbose output"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of("validity number of days"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of("Serial ID of cert to revoke"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("keytool error: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of("Illegal option:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of("Illegal value: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of("Unknown password type: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of("Cannot find environment variable: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Cannot find file: "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of("Command option {0} needs an argument."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of("Warning:  Different store and key passwords not supported for PKCS12 KeyStores. Ignoring user-specified {0} value."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of("The -keystore or -storetype option cannot be used with the -cacerts option"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of("-keystore must be NONE if -storetype is {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of("Too many retries, program terminated"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of("-storepasswd and -keypasswd commands not supported if -storetype is {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of("-keypasswd commands not supported if -storetype is PKCS12"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of("-keypass and -new can not be specified if -storetype is {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of("if -protected is specified, then -storepass, -keypass, and -new must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of("if -srcprotected is specified, then -srcstorepass and -srckeypass must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of("if keystore is not password protected, then -storepass, -keypass, and -new must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of("if source keystore is not password protected, then -srcstorepass and -srckeypass must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of("Illegal startdate value"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of("Validity must be greater than zero"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of("%s not a provider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of("Provider named \"%s\" not found"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of("Provider \"%s\" not found"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of("Usage error: no command provided"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of("Source keystore file exists, but is empty: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Please specify -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of("Must not specify both -v and -rfc with \'list\' command"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of("Key password must be at least 6 characters"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of("New password must be at least 6 characters"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of("Keystore file exists, but is empty: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of("Keystore file does not exist: "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of("Must specify destination alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of("Must specify alias"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of("Keystore password must be at least 6 characters"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of("Enter the password to be stored:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of("Enter keystore password:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of("Enter source keystore password:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of("Enter destination keystore password:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of("Keystore password is too short - must be at least 6 characters"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of("Unknown Entry Type"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of("Entry for alias {0} successfully imported."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of("Entry for alias {0} not imported."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of("Problem importing entry for alias {0}: {1}.\nEntry for alias {0} not imported."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of("Import command completed:  {0} entries successfully imported, {1} entries failed or cancelled"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of("Warning: Overwriting existing alias {0} in destination keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of("Existing entry alias {0} exists, overwrite? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of("Too many failures - try later"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of("Certification request stored in file <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of("Submit this to your CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of("if alias not specified, destalias and srckeypass must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of("The destination pkcs12 keystore has different storepass and keypass. Please retry with -destkeypass specified."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of("Certificate stored in file <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of("Certificate reply was installed in keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of("Certificate reply was not installed in keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of("Certificate was added to keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of("Certificate was not added to keystore"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[Storing {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of("{0} has no public key (certificate)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of("Cannot derive signature algorithm"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of("Alias <{0}> does not exist"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of("Alias <{0}> has no certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("groupname.keysize.coexist"_s),
			$of("Cannot specify both -groupname and -keysize"_s)
		}),
		$$new($ObjectArray, {
			$of("deprecate.keysize.for.ec"_s),
			$of("Specifying -keysize for generating EC keys is deprecated, please use \"-groupname %s\" instead."_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of("Key pair not generated, alias <{0}> already exists"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of("Generating {0} bit {1} key pair and self-signed certificate ({2}) with a validity of {3} days\n\tfor: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.a.certificate.sigAlgName.issued.by.signerAlias.with.a.validity.of.validality.days.for"_s),
			$of("Generating {0} bit {1} key pair and a certificate ({2}) issued by <{3}> with a validity of {4} days\n\tfor: {5}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of("Enter key password for <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of("\t(RETURN if same as keystore password):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of("Key password is too short - must be at least 6 characters"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of("Too many failures - key not added to keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of("Destination alias <{0}> already exists"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of("Password is too short - must be at least 6 characters"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of("Too many failures. Key entry not cloned"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of("key password for <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of("No entries from identity database added"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Alias name: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of("Creation date: {0,date}"_s)
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
			$of("Entry type: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of("Certificate chain length: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Certificate[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Certificate fingerprint (SHA-256): "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of("Keystore type: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of("Keystore provider: "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of("Your keystore contains {0,number,integer} entry"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of("Your keystore contains {0,number,integer} entries"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of("Failed to parse input"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of("Empty input"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of("Not X.509 certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of("{0} has no public key"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of("{0} has no X.509 certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of("New certificate (self-signed):"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of("Reply has no certificates"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of("Certificate not imported, alias <{0}> already exists"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of("Input not an X.509 certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of("Certificate already exists in keystore under alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of("Do you still want to add it? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of("Certificate already exists in system-wide CA keystore under alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of("Do you still want to add it to your own keystore? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of("Trust this certificate? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("New {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of("Passwords must differ"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Re-enter new {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of("Re-enter password: "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of("Re-enter new password: "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of("They don\'t match. Try again"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of("Enter {0} alias name:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of("Enter new alias name\t(RETURN to cancel import for this entry):  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Enter alias name:  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of("\t(RETURN if same as for <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of("What is your first and last name?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of("What is the name of your organizational unit?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of("What is the name of your organization?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of("What is the name of your City or Locality?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of("What is the name of your State or Province?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of("What is the two-letter country code for this unit?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of("Is {0} correct?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("no"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("yes"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("y"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of("Alias <{0}> has no key"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of("Alias <{0}> references an entry type that is not a private key entry.  The -keyclone command only supports cloning of private key entries"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of("Signer #%d:"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of("Timestamp:"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Signature:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of("Certificate owner: "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of("Not a signed jar file"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of("No certificate from the SSL server"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of("* The integrity of the information stored in your keystore  *\n* has NOT been verified!  In order to verify its integrity, *\n* you must provide your keystore password.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of("* The integrity of the information stored in the srckeystore*\n* has NOT been verified!  In order to verify its integrity, *\n* you must provide the srckeystore password.                *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of("Certificate reply does not contain public key for <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of("Incomplete certificate chain in reply"_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of("Top-level certificate in reply:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of("... is not trusted. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of("Install reply anyway? [no]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of("Public keys in reply and keystore don\'t match"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of("Certificate reply and certificate in keystore are identical"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of("Failed to establish chain from reply"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of("Wrong answer, try again"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of("Secret Key not generated, alias <{0}> already exists"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of("Please provide -keysize for secret key generation"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of("WARNING: not verified. Make sure -keystore is correct."_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct.or.specify.trustcacerts"_s),
			$of("WARNING: not verified. Make sure -keystore is correct or specify -trustcacerts."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of("Extensions: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of("(Empty value)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of("Extension Request:"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of("Unknown keyUsage type: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of("Unknown extendedkeyUsage type: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of("Unknown AccessDescription type: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of("Unrecognized GeneralName type: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of("This extension cannot be marked as critical. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of("Odd number of hex digits found: "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of("Unknown extension type: "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of("command {0} is ambiguous:"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of("The certificate request"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of("The issuer"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of("The generated certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of("The generated CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of("The generated certificate request"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("The certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of("The CRL"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("The TSA certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of("The input"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of("Reply"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d of %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of("Issuer <%s> in cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of("Issuer <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (weak)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of("%s (disabled)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of("%1$d-bit %2$s key"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of("%1$d-bit %2$s key (weak)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of("%1$d-bit %2$s key (disabled)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of("%s key of unknown size"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of("Owner: {0}\nIssuer: {1}\nSerial number: {2}\nValid from: {3} until: {4}\nCertificate fingerprints:\n\t SHA1: {5}\n\t SHA256: {6}\nSignature algorithm name: {7}\nSubject Public Key Algorithm: {8}\nVersion: {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of("PKCS #10 Certificate Request (Version 1.0)\nSubject: %1$s\nFormat: %2$s\nPublic Key: %3$s\nSignature algorithm: %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of("Verified by %1$s in %2$s with a %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.disabled"_s),
			$of("%1$s uses the %2$s signature algorithm which is considered a security risk and is disabled."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.weak"_s),
			$of("%1$s uses the %2$s signature algorithm which is considered a security risk. This algorithm will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.disabled"_s),
			$of("%1$s uses a %2$s which is considered a security risk and is disabled."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.weak"_s),
			$of("%1$s uses a %2$s which is considered a security risk. This key size will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of("The %1$s keystore uses a proprietary format. It is recommended to migrate to PKCS12 which is an industry standard format using \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of("Migrated \"%1$s\" to %4$s. The %2$s keystore is backed up as \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of("The original keystore \"%1$s\" is backed up as \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of("Importing keystore %1$s to %2$s..."_s)
		}),
		$$new($ObjectArray, {
			$of("keyalg.option.missing.error"_s),
			$of("The -keyalg option must be specified."_s)
		}),
		$$new($ObjectArray, {
			$of("showinfo.no.option"_s),
			$of("Missing option for -showinfo. Try \"keytool -showinfo -tls\"."_s)
		})
	}));
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$loadClass(Resources, name, initialize, &_Resources_ClassInfo_, clinit$Resources, allocate$Resources);
	return class$;
}

$Class* Resources::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun