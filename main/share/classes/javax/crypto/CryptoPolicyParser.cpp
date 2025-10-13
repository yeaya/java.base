#include <javax/crypto/CryptoPolicyParser.h>

#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/crypto/CryptoAllPermission.h>
#include <javax/crypto/CryptoPermission.h>
#include <javax/crypto/CryptoPolicyParser$CryptoPermissionEntry.h>
#include <javax/crypto/CryptoPolicyParser$GrantEntry.h>
#include <javax/crypto/CryptoPolicyParser$ParsingException.h>
#include <jcpp.h>

#undef ALG_NAME
#undef ALG_NAME_WILDCARD
#undef ENGLISH
#undef INSTANCE
#undef MAX_VALUE
#undef TT_EOF
#undef TT_NUMBER
#undef TT_WORD
#undef TYPE

using $IntegerArray = $Array<::java::lang::Integer>;
using $CryptoPermissionArray = $Array<::javax::crypto::CryptoPermission>;
using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $CryptoAllPermission = ::javax::crypto::CryptoAllPermission;
using $CryptoPermission = ::javax::crypto::CryptoPermission;
using $CryptoPolicyParser$CryptoPermissionEntry = ::javax::crypto::CryptoPolicyParser$CryptoPermissionEntry;
using $CryptoPolicyParser$GrantEntry = ::javax::crypto::CryptoPolicyParser$GrantEntry;
using $CryptoPolicyParser$ParsingException = ::javax::crypto::CryptoPolicyParser$ParsingException;

namespace javax {
	namespace crypto {

$FieldInfo _CryptoPolicyParser_FieldInfo_[] = {
	{"grantEntries", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/crypto/CryptoPolicyParser$GrantEntry;>;", $PRIVATE, $field(CryptoPolicyParser, grantEntries)},
	{"st", "Ljava/io/StreamTokenizer;", nullptr, $PRIVATE, $field(CryptoPolicyParser, st)},
	{"lookahead", "I", nullptr, $PRIVATE, $field(CryptoPolicyParser, lookahead)},
	{}
};

$MethodInfo _CryptoPolicyParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CryptoPolicyParser::*)()>(&CryptoPolicyParser::init$))},
	{"getInstance", "(Ljava/lang/String;[Ljava/lang/Integer;)Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$AlgorithmParameterSpec*(*)($String*,$IntegerArray*)>(&CryptoPolicyParser::getInstance)), "javax.crypto.CryptoPolicyParser$ParsingException"},
	{"getPermissions", "()[Ljavax/crypto/CryptoPermission;", nullptr, 0, $method(static_cast<$CryptoPermissionArray*(CryptoPolicyParser::*)()>(&CryptoPolicyParser::getPermissions))},
	{"isConsistent", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Hashtable;)Z", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Hashtable<Ljava/lang/String;Ljava/util/Vector<Ljava/lang/String;>;>;)Z", $PRIVATE, $method(static_cast<bool(CryptoPolicyParser::*)($String*,$String*,$Hashtable*)>(&CryptoPolicyParser::isConsistent))},
	{"match", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CryptoPolicyParser::*)()>(&CryptoPolicyParser::match)), "javax.crypto.CryptoPolicyParser$ParsingException,java.io.IOException"},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CryptoPolicyParser::*)($String*)>(&CryptoPolicyParser::match)), "javax.crypto.CryptoPolicyParser$ParsingException,java.io.IOException"},
	{"parseGrantEntry", "(Ljava/util/Hashtable;)Ljavax/crypto/CryptoPolicyParser$GrantEntry;", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/util/Vector<Ljava/lang/String;>;>;)Ljavax/crypto/CryptoPolicyParser$GrantEntry;", $PRIVATE, $method(static_cast<$CryptoPolicyParser$GrantEntry*(CryptoPolicyParser::*)($Hashtable*)>(&CryptoPolicyParser::parseGrantEntry)), "javax.crypto.CryptoPolicyParser$ParsingException,java.io.IOException"},
	{"parsePermissionEntry", "(Ljava/util/Hashtable;)Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/util/Vector<Ljava/lang/String;>;>;)Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;", $PRIVATE, $method(static_cast<$CryptoPolicyParser$CryptoPermissionEntry*(CryptoPolicyParser::*)($Hashtable*)>(&CryptoPolicyParser::parsePermissionEntry)), "javax.crypto.CryptoPolicyParser$ParsingException,java.io.IOException"},
	{"peek", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CryptoPolicyParser::*)($String*)>(&CryptoPolicyParser::peek))},
	{"peekAndMatch", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CryptoPolicyParser::*)($String*)>(&CryptoPolicyParser::peekAndMatch)), "javax.crypto.CryptoPolicyParser$ParsingException,java.io.IOException"},
	{"read", "(Ljava/io/Reader;)V", nullptr, 0, $method(static_cast<void(CryptoPolicyParser::*)($Reader*)>(&CryptoPolicyParser::read)), "javax.crypto.CryptoPolicyParser$ParsingException,java.io.IOException"},
	{}
};

$InnerClassInfo _CryptoPolicyParser_InnerClassesInfo_[] = {
	{"javax.crypto.CryptoPolicyParser$ParsingException", "javax.crypto.CryptoPolicyParser", "ParsingException", $STATIC | $FINAL},
	{"javax.crypto.CryptoPolicyParser$CryptoPermissionEntry", "javax.crypto.CryptoPolicyParser", "CryptoPermissionEntry", $PRIVATE | $STATIC},
	{"javax.crypto.CryptoPolicyParser$GrantEntry", "javax.crypto.CryptoPolicyParser", "GrantEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CryptoPolicyParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.CryptoPolicyParser",
	"java.lang.Object",
	nullptr,
	_CryptoPolicyParser_FieldInfo_,
	_CryptoPolicyParser_MethodInfo_,
	nullptr,
	nullptr,
	_CryptoPolicyParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.crypto.CryptoPolicyParser$ParsingException,javax.crypto.CryptoPolicyParser$CryptoPermissionEntry,javax.crypto.CryptoPolicyParser$GrantEntry"
};

$Object* allocate$CryptoPolicyParser($Class* clazz) {
	return $of($alloc(CryptoPolicyParser));
}

void CryptoPolicyParser::init$() {
	$set(this, grantEntries, $new($Vector));
}

void CryptoPolicyParser::read($Reader* policy$renamed) {
	$var($Reader, policy, policy$renamed);
	if (!($instanceOf($BufferedReader, policy))) {
		$assign(policy, $new($BufferedReader, policy));
	}
	$set(this, st, $new($StreamTokenizer, policy));
	$nc(this->st)->resetSyntax();
	$nc(this->st)->wordChars(u'a', u'z');
	$nc(this->st)->wordChars(u'A', u'Z');
	$nc(this->st)->wordChars(u'.', u'.');
	$nc(this->st)->wordChars(u'0', u'9');
	$nc(this->st)->wordChars(u'_', u'_');
	$nc(this->st)->wordChars(u'$', u'$');
	$nc(this->st)->wordChars(128 + 32, 255);
	$nc(this->st)->whitespaceChars(0, u' ');
	$nc(this->st)->commentChar(u'/');
	$nc(this->st)->quoteChar(u'\'');
	$nc(this->st)->quoteChar(u'\"');
	$nc(this->st)->lowerCaseMode(false);
	$nc(this->st)->ordinaryChar(u'/');
	$nc(this->st)->slashSlashComments(true);
	$nc(this->st)->slashStarComments(true);
	$nc(this->st)->parseNumbers();
	$var($Hashtable, processedPermissions, nullptr);
	this->lookahead = $nc(this->st)->nextToken();
	while (this->lookahead != $StreamTokenizer::TT_EOF) {
		if (peek("grant"_s)) {
			$var($CryptoPolicyParser$GrantEntry, ge, parseGrantEntry(processedPermissions));
			if (ge != nullptr) {
				$nc(this->grantEntries)->addElement(ge);
			}
		} else {
			$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), "expected grant statement"_s);
		}
		match(";"_s);
	}
}

$CryptoPolicyParser$GrantEntry* CryptoPolicyParser::parseGrantEntry($Hashtable* processedPermissions) {
	$var($CryptoPolicyParser$GrantEntry, e, $new($CryptoPolicyParser$GrantEntry));
	match("grant"_s);
	match("{"_s);
	while (!peek("}"_s)) {
		if (peek("Permission"_s)) {
			$var($CryptoPolicyParser$CryptoPermissionEntry, pe, parsePermissionEntry(processedPermissions));
			e->add(pe);
			match(";"_s);
		} else {
			$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), "expected permission entry"_s);
		}
	}
	match("}"_s);
	return e;
}

$CryptoPolicyParser$CryptoPermissionEntry* CryptoPolicyParser::parsePermissionEntry($Hashtable* processedPermissions) {
	$var($CryptoPolicyParser$CryptoPermissionEntry, e, $new($CryptoPolicyParser$CryptoPermissionEntry));
	match("Permission"_s);
	$set(e, cryptoPermission, match("permission type"_s));
	if ($nc(e->cryptoPermission)->equals("javax.crypto.CryptoAllPermission"_s)) {
		$init($CryptoAllPermission);
		$set(e, alg, $CryptoAllPermission::ALG_NAME);
		e->maxKeySize = $Integer::MAX_VALUE;
		return e;
	}
	if (peek("\""_s)) {
		$init($Locale);
		$set(e, alg, $nc($(match("quoted string"_s)))->toUpperCase($Locale::ENGLISH));
	} else if (peek("*"_s)) {
		match("*"_s);
		$init($CryptoPermission);
		$set(e, alg, $CryptoPermission::ALG_NAME_WILDCARD);
	} else {
		$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), "Missing the algorithm name"_s);
	}
	peekAndMatch(","_s);
	if (peek("\""_s)) {
		$init($Locale);
		$set(e, exemptionMechanism, $nc($(match("quoted string"_s)))->toUpperCase($Locale::ENGLISH));
	}
	peekAndMatch(","_s);
	if (!isConsistent(e->alg, e->exemptionMechanism, processedPermissions)) {
		$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), "Inconsistent policy"_s);
	}
	if (peek("number"_s)) {
		e->maxKeySize = match();
	} else if (peek("*"_s)) {
		match("*"_s);
		e->maxKeySize = $Integer::MAX_VALUE;
	} else if (!peek(";"_s)) {
		$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), "Missing the maximum allowable key size"_s);
	} else {
		e->maxKeySize = $Integer::MAX_VALUE;
	}
	peekAndMatch(","_s);
	if (peek("\""_s)) {
		$var($String, algParamSpecClassName, match("quoted string"_s));
		$var($Vector, paramsV, $new($Vector, 1));
		while (peek(","_s)) {
			match(","_s);
			if (peek("number"_s)) {
				paramsV->addElement($($Integer::valueOf(match())));
			} else if (peek("*"_s)) {
				match("*"_s);
				paramsV->addElement($($Integer::valueOf($Integer::MAX_VALUE)));
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), "Expecting an integer"_s);
			}
		}
		$var($IntegerArray, params, $new($IntegerArray, paramsV->size()));
		paramsV->copyInto(params);
		e->checkParam = true;
		$set(e, algParamSpec, getInstance(algParamSpecClassName, params));
	}
	return e;
}

$AlgorithmParameterSpec* CryptoPolicyParser::getInstance($String* type, $IntegerArray* params) {
	$load(CryptoPolicyParser);
	$beforeCallerSensitive();
	$var($AlgorithmParameterSpec, ret, nullptr);
	try {
		$Class* apsClass = $Class::forName(type);
		$var($ClassArray, paramClasses, $new($ClassArray, $nc(params)->length));
		for (int32_t i = 0; i < params->length; ++i) {
			$init($Integer);
			paramClasses->set(i, $Integer::TYPE);
		}
		$var($Constructor, c, $nc(apsClass)->getConstructor(paramClasses));
		$assign(ret, $cast($AlgorithmParameterSpec, $nc(c)->newInstance(params)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($CryptoPolicyParser$ParsingException, $$str({"Cannot call the constructor of "_s, type, e}));
	}
	return ret;
}

bool CryptoPolicyParser::peekAndMatch($String* expect) {
	if (peek(expect)) {
		match(expect);
		return true;
	}
	return false;
}

bool CryptoPolicyParser::peek($String* expect) {
	bool found = false;
	switch (this->lookahead) {
	case $StreamTokenizer::TT_WORD:
		{
			if ($nc(expect)->equalsIgnoreCase($nc(this->st)->sval)) {
				found = true;
			}
			break;
		}
	case $StreamTokenizer::TT_NUMBER:
		{
			if ($nc(expect)->equalsIgnoreCase("number"_s)) {
				found = true;
			}
			break;
		}
	case u',':
		{
			if ($nc(expect)->equals(","_s)) {
				found = true;
			}
			break;
		}
	case u'{':
		{
			if ($nc(expect)->equals("{"_s)) {
				found = true;
			}
			break;
		}
	case u'}':
		{
			if ($nc(expect)->equals("}"_s)) {
				found = true;
			}
			break;
		}
	case u'\"':
		{
			if ($nc(expect)->equals("\""_s)) {
				found = true;
			}
			break;
		}
	case u'*':
		{
			if ($nc(expect)->equals("*"_s)) {
				found = true;
			}
			break;
		}
	case u';':
		{
			if ($nc(expect)->equals(";"_s)) {
				found = true;
			}
			break;
		}
	default:
		{
			break;
		}
	}
	return found;
}

int32_t CryptoPolicyParser::match() {
	int32_t value = -1;
	int32_t lineno = $nc(this->st)->lineno();
	$var($String, sValue, nullptr);
	switch (this->lookahead) {
	case $StreamTokenizer::TT_NUMBER:
		{
			value = $cast(int32_t, $nc(this->st)->nval);
			if (value < 0) {
				$assign(sValue, $String::valueOf($nc(this->st)->nval));
			}
			this->lookahead = $nc(this->st)->nextToken();
			break;
		}
	default:
		{
			$assign(sValue, $nc(this->st)->sval);
			break;
		}
	}
	if (value <= 0) {
		$throwNew($CryptoPolicyParser$ParsingException, lineno, "a non-negative number"_s, sValue);
	}
	return value;
}

$String* CryptoPolicyParser::match($String* expect) {
	$var($String, value, nullptr);
	switch (this->lookahead) {
	case $StreamTokenizer::TT_NUMBER:
		{
			int32_t var$0 = $nc(this->st)->lineno();
			$var($String, var$1, expect);
			$throwNew($CryptoPolicyParser$ParsingException, var$0, var$1, $$str({"number "_s, $($String::valueOf($nc(this->st)->nval))}));
		}
	case $StreamTokenizer::TT_EOF:
		{
			$throwNew($CryptoPolicyParser$ParsingException, $$str({"expected "_s, expect, ", read end of file"_s}));
		}
	case $StreamTokenizer::TT_WORD:
		{
			if ($nc(expect)->equalsIgnoreCase($nc(this->st)->sval)) {
				this->lookahead = $nc(this->st)->nextToken();
			} else if (expect->equalsIgnoreCase("permission type"_s)) {
				$assign(value, $nc(this->st)->sval);
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, $nc(this->st)->sval);
			}
			break;
		}
	case u'\"':
		{
			if ($nc(expect)->equalsIgnoreCase("quoted string"_s)) {
				$assign(value, $nc(this->st)->sval);
				this->lookahead = $nc(this->st)->nextToken();
			} else if (expect->equalsIgnoreCase("permission type"_s)) {
				$assign(value, $nc(this->st)->sval);
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, $nc(this->st)->sval);
			}
			break;
		}
	case u',':
		{
			if ($nc(expect)->equals(","_s)) {
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, ","_s);
			}
			break;
		}
	case u'{':
		{
			if ($nc(expect)->equals("{"_s)) {
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, "{"_s);
			}
			break;
		}
	case u'}':
		{
			if ($nc(expect)->equals("}"_s)) {
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, "}"_s);
			}
			break;
		}
	case u';':
		{
			if ($nc(expect)->equals(";"_s)) {
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, ";"_s);
			}
			break;
		}
	case u'*':
		{
			if ($nc(expect)->equals("*"_s)) {
				this->lookahead = $nc(this->st)->nextToken();
			} else {
				$throwNew($CryptoPolicyParser$ParsingException, $nc(this->st)->lineno(), expect, "*"_s);
			}
			break;
		}
	default:
		{
			int32_t var$2 = $nc(this->st)->lineno();
			$var($String, var$3, expect);
			$throwNew($CryptoPolicyParser$ParsingException, var$2, var$3, $($String::valueOf((char16_t)this->lookahead)));
		}
	}
	return value;
}

$CryptoPermissionArray* CryptoPolicyParser::getPermissions() {
	$var($Vector, result, $new($Vector));
	$var($Enumeration, grantEnum, $nc(this->grantEntries)->elements());
	while ($nc(grantEnum)->hasMoreElements()) {
		$var($CryptoPolicyParser$GrantEntry, ge, $cast($CryptoPolicyParser$GrantEntry, grantEnum->nextElement()));
		$var($Enumeration, permEnum, $nc(ge)->permissionElements());
		while ($nc(permEnum)->hasMoreElements()) {
			$var($CryptoPolicyParser$CryptoPermissionEntry, pe, $cast($CryptoPolicyParser$CryptoPermissionEntry, permEnum->nextElement()));
			if ($nc($nc(pe)->cryptoPermission)->equals("javax.crypto.CryptoAllPermission"_s)) {
				$init($CryptoAllPermission);
				result->addElement($CryptoAllPermission::INSTANCE);
			} else if (pe->checkParam) {
				result->addElement($$new($CryptoPermission, pe->alg, pe->maxKeySize, pe->algParamSpec, pe->exemptionMechanism));
			} else {
				result->addElement($$new($CryptoPermission, pe->alg, pe->maxKeySize, pe->exemptionMechanism));
			}
		}
	}
	$var($CryptoPermissionArray, ret, $new($CryptoPermissionArray, result->size()));
	result->copyInto(ret);
	return ret;
}

bool CryptoPolicyParser::isConsistent($String* alg, $String* exemptionMechanism, $Hashtable* processedPermissions$renamed) {
	$var($Hashtable, processedPermissions, processedPermissions$renamed);
	$var($String, thisExemptionMechanism, exemptionMechanism == nullptr ? "none"_s : exemptionMechanism);
	if (processedPermissions == nullptr) {
		$assign(processedPermissions, $new($Hashtable));
		$var($Vector, exemptionMechanisms, $new($Vector, 1));
		exemptionMechanisms->addElement(thisExemptionMechanism);
		processedPermissions->put(alg, exemptionMechanisms);
		return true;
	}
	$init($CryptoAllPermission);
	if ($nc(processedPermissions)->containsKey($CryptoAllPermission::ALG_NAME)) {
		return false;
	}
	$var($Vector, exemptionMechanisms, nullptr);
	if ($nc(processedPermissions)->containsKey(alg)) {
		$assign(exemptionMechanisms, $cast($Vector, processedPermissions->get(alg)));
		if ($nc(exemptionMechanisms)->contains(thisExemptionMechanism)) {
			return false;
		}
	} else {
		$assign(exemptionMechanisms, $new($Vector, 1));
	}
	$nc(exemptionMechanisms)->addElement(thisExemptionMechanism);
	$nc(processedPermissions)->put(alg, exemptionMechanisms);
	return true;
}

CryptoPolicyParser::CryptoPolicyParser() {
}

$Class* CryptoPolicyParser::load$($String* name, bool initialize) {
	$loadClass(CryptoPolicyParser, name, initialize, &_CryptoPolicyParser_ClassInfo_, allocate$CryptoPolicyParser);
	return class$;
}

$Class* CryptoPolicyParser::class$ = nullptr;

	} // crypto
} // javax