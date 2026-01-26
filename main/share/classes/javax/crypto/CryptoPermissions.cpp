#include <javax/crypto/CryptoPermissions.h>

#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Reader.h>
#include <java/lang/SecurityException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/crypto/CryptoAllPermission.h>
#include <javax/crypto/CryptoPermission.h>
#include <javax/crypto/CryptoPolicyParser.h>
#include <javax/crypto/PermissionsEnumerator.h>
#include <jcpp.h>

#undef ALG_NAME
#undef ALG_NAME_WILDCARD
#undef UTF_8

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $CryptoPermissionArray = $Array<::javax::crypto::CryptoPermission>;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CryptoAllPermission = ::javax::crypto::CryptoAllPermission;
using $CryptoPermission = ::javax::crypto::CryptoPermission;
using $CryptoPolicyParser = ::javax::crypto::CryptoPolicyParser;
using $PermissionsEnumerator = ::javax::crypto::PermissionsEnumerator;

namespace javax {
	namespace crypto {

$FieldInfo _CryptoPermissions_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoPermissions, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CryptoPermissions, serialPersistentFields)},
	{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/security/PermissionCollection;>;", $PRIVATE | $TRANSIENT, $field(CryptoPermissions, perms)},
	{}
};

$MethodInfo _CryptoPermissions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CryptoPermissions, init$, void)},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(CryptoPermissions, add, void, $Permission*)},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(CryptoPermissions, elements, $Enumeration*)},
	{"getMinimum", "(Ljavax/crypto/CryptoPermissions;)Ljavax/crypto/CryptoPermissions;", nullptr, 0, $method(CryptoPermissions, getMinimum, CryptoPermissions*, CryptoPermissions*)},
	{"getMinimum", "(Ljava/security/PermissionCollection;Ljava/security/PermissionCollection;)[Ljavax/crypto/CryptoPermission;", nullptr, $PRIVATE, $method(CryptoPermissions, getMinimum, $CryptoPermissionArray*, $PermissionCollection*, $PermissionCollection*)},
	{"getMinimum", "(ILjava/security/PermissionCollection;)[Ljavax/crypto/CryptoPermission;", nullptr, $PRIVATE, $method(CryptoPermissions, getMinimum, $CryptoPermissionArray*, int32_t, $PermissionCollection*)},
	{"getPermissionCollection", "(Ljava/lang/String;)Ljava/security/PermissionCollection;", nullptr, 0, $method(CryptoPermissions, getPermissionCollection, $PermissionCollection*, $String*)},
	{"getPermissionCollection", "(Ljavax/crypto/CryptoPermission;)Ljava/security/PermissionCollection;", nullptr, $PRIVATE, $method(CryptoPermissions, getPermissionCollection, $PermissionCollection*, $CryptoPermission*)},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(CryptoPermissions, implies, bool, $Permission*)},
	{"isEmpty", "()Z", nullptr, 0, $method(CryptoPermissions, isEmpty, bool)},
	{"load", "(Ljava/io/InputStream;)V", nullptr, 0, $method(CryptoPermissions, load, void, $InputStream*), "java.io.IOException,javax.crypto.CryptoPolicyParser$ParsingException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(CryptoPermissions, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(CryptoPermissions, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _CryptoPermissions_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.CryptoPermissions",
	"java.security.PermissionCollection",
	nullptr,
	_CryptoPermissions_FieldInfo_,
	_CryptoPermissions_MethodInfo_
};

$Object* allocate$CryptoPermissions($Class* clazz) {
	return $of($alloc(CryptoPermissions));
}

$ObjectStreamFieldArray* CryptoPermissions::serialPersistentFields = nullptr;

void CryptoPermissions::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap, 7));
}

void CryptoPermissions::load($InputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($CryptoPolicyParser, parser, $new($CryptoPolicyParser));
	$init($StandardCharsets);
	parser->read($$new($BufferedReader, $$new($InputStreamReader, in, $StandardCharsets::UTF_8)));
	$var($CryptoPermissionArray, parsingResult, parser->getPermissions());
	for (int32_t i = 0; i < $nc(parsingResult)->length; ++i) {
		this->add(parsingResult->get(i));
	}
}

bool CryptoPermissions::isEmpty() {
	return $nc(this->perms)->isEmpty();
}

void CryptoPermissions::add($Permission* permission) {
	$useLocalCurrentObjectStackCache();
	if (isReadOnly()) {
		$throwNew($SecurityException, "Attempt to add a Permission to a readonly CryptoPermissions object"_s);
	}
	if (!($instanceOf($CryptoPermission, permission))) {
		return;
	}
	$var($CryptoPermission, cryptoPerm, $cast($CryptoPermission, permission));
	$var($PermissionCollection, pc, getPermissionCollection(cryptoPerm));
	$nc(pc)->add(cryptoPerm);
	$var($String, alg, $nc(cryptoPerm)->getAlgorithm());
	$nc(this->perms)->putIfAbsent(alg, pc);
}

bool CryptoPermissions::implies($Permission* permission) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($CryptoPermission, permission))) {
		return false;
	}
	$var($CryptoPermission, cryptoPerm, $cast($CryptoPermission, permission));
	$var($PermissionCollection, pc, getPermissionCollection($($nc(cryptoPerm)->getAlgorithm())));
	if (pc != nullptr) {
		return pc->implies(cryptoPerm);
	} else {
		return false;
	}
}

$Enumeration* CryptoPermissions::elements() {
	return $new($PermissionsEnumerator, $($nc(this->perms)->elements()));
}

CryptoPermissions* CryptoPermissions::getMinimum(CryptoPermissions* other) {
	$useLocalCurrentObjectStackCache();
	if (other == nullptr) {
		return nullptr;
	}
	$init($CryptoAllPermission);
	if ($nc(this->perms)->containsKey($CryptoAllPermission::ALG_NAME)) {
		return other;
	}
	if ($nc($nc(other)->perms)->containsKey($CryptoAllPermission::ALG_NAME)) {
		return this;
	}
	$var(CryptoPermissions, ret, $new(CryptoPermissions));
	$init($CryptoPermission);
	$var($PermissionCollection, thatWildcard, $cast($PermissionCollection, $nc($nc(other)->perms)->get($CryptoPermission::ALG_NAME_WILDCARD)));
	int32_t maxKeySize = 0;
	if (thatWildcard != nullptr) {
		maxKeySize = $nc(($cast($CryptoPermission, $($nc($(thatWildcard->elements()))->nextElement()))))->getMaxKeySize();
	}
	$var($Enumeration, thisKeys, $nc(this->perms)->keys());
	while ($nc(thisKeys)->hasMoreElements()) {
		$var($String, alg, $cast($String, thisKeys->nextElement()));
		$var($PermissionCollection, thisPc, $cast($PermissionCollection, $nc(this->perms)->get(alg)));
		$var($PermissionCollection, thatPc, $cast($PermissionCollection, $nc(other->perms)->get(alg)));
		$var($CryptoPermissionArray, partialResult, nullptr);
		if (thatPc == nullptr) {
			if (thatWildcard == nullptr) {
				continue;
			}
			$assign(partialResult, getMinimum(maxKeySize, thisPc));
		} else {
			$assign(partialResult, getMinimum(thisPc, thatPc));
		}
		for (int32_t i = 0; i < $nc(partialResult)->length; ++i) {
			ret->add(partialResult->get(i));
		}
	}
	$var($PermissionCollection, thisWildcard, $cast($PermissionCollection, $nc(this->perms)->get($CryptoPermission::ALG_NAME_WILDCARD)));
	if (thisWildcard == nullptr) {
		return ret;
	}
	maxKeySize = $nc(($cast($CryptoPermission, $($nc($($nc(thisWildcard)->elements()))->nextElement()))))->getMaxKeySize();
	$var($Enumeration, thatKeys, $nc(other->perms)->keys());
	while ($nc(thatKeys)->hasMoreElements()) {
		$var($String, alg, $cast($String, thatKeys->nextElement()));
		if ($nc(this->perms)->containsKey(alg)) {
			continue;
		}
		$var($PermissionCollection, thatPc, $cast($PermissionCollection, $nc(other->perms)->get(alg)));
		$var($CryptoPermissionArray, partialResult, nullptr);
		$assign(partialResult, getMinimum(maxKeySize, thatPc));
		for (int32_t i = 0; i < $nc(partialResult)->length; ++i) {
			ret->add(partialResult->get(i));
		}
	}
	return ret;
}

$CryptoPermissionArray* CryptoPermissions::getMinimum($PermissionCollection* thisPc, $PermissionCollection* thatPc) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, permVector, $new($Vector, 2));
	$var($Enumeration, thisPcPermissions, $nc(thisPc)->elements());
	while ($nc(thisPcPermissions)->hasMoreElements()) {
		$var($CryptoPermission, thisCp, $cast($CryptoPermission, thisPcPermissions->nextElement()));
		$var($Enumeration, thatPcPermissions, $nc(thatPc)->elements());
		while ($nc(thatPcPermissions)->hasMoreElements()) {
			$var($CryptoPermission, thatCp, $cast($CryptoPermission, thatPcPermissions->nextElement()));
			if ($nc(thatCp)->implies(thisCp)) {
				permVector->addElement(thisCp);
				break;
			}
			if ($nc(thisCp)->implies(thatCp)) {
				permVector->addElement(thatCp);
			}
		}
	}
	$var($CryptoPermissionArray, ret, $new($CryptoPermissionArray, permVector->size()));
	permVector->copyInto(ret);
	return ret;
}

$CryptoPermissionArray* CryptoPermissions::getMinimum(int32_t maxKeySize, $PermissionCollection* pc) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, permVector, $new($Vector, 1));
	$var($Enumeration, enum_, $nc(pc)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($CryptoPermission, cp, $cast($CryptoPermission, enum_->nextElement()));
		if ($nc(cp)->getMaxKeySize() <= maxKeySize) {
			permVector->addElement(cp);
		} else if (cp->getCheckParam()) {
			$var($String, var$0, cp->getAlgorithm());
			int32_t var$1 = maxKeySize;
			$var($AlgorithmParameterSpec, var$2, cp->getAlgorithmParameterSpec());
			permVector->addElement($$new($CryptoPermission, var$0, var$1, var$2, $(cp->getExemptionMechanism())));
		} else {
			$var($String, var$3, cp->getAlgorithm());
			int32_t var$4 = maxKeySize;
			permVector->addElement($$new($CryptoPermission, var$3, var$4, $(cp->getExemptionMechanism())));
		}
	}
	$var($CryptoPermissionArray, ret, $new($CryptoPermissionArray, permVector->size()));
	permVector->copyInto(ret);
	return ret;
}

$PermissionCollection* CryptoPermissions::getPermissionCollection($String* alg) {
	$init($CryptoAllPermission);
	$var($PermissionCollection, pc, $cast($PermissionCollection, $nc(this->perms)->get($CryptoAllPermission::ALG_NAME)));
	if (pc == nullptr) {
		$assign(pc, $cast($PermissionCollection, $nc(this->perms)->get(alg)));
		if (pc == nullptr) {
			$init($CryptoPermission);
			$assign(pc, $cast($PermissionCollection, $nc(this->perms)->get($CryptoPermission::ALG_NAME_WILDCARD)));
		}
	}
	return pc;
}

$PermissionCollection* CryptoPermissions::getPermissionCollection($CryptoPermission* cryptoPerm) {
	$useLocalCurrentObjectStackCache();
	$var($String, alg, $nc(cryptoPerm)->getAlgorithm());
	$var($PermissionCollection, pc, $cast($PermissionCollection, $nc(this->perms)->get(alg)));
	if (pc == nullptr) {
		$assign(pc, cryptoPerm->newPermissionCollection());
	}
	return pc;
}

void CryptoPermissions::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Hashtable, permTable, ($cast($Hashtable, $nc(fields)->get("perms"_s, ($Object*)nullptr))));
	if (permTable != nullptr) {
		$set(this, perms, $new($ConcurrentHashMap, static_cast<$Map*>(permTable)));
	} else {
		$set(this, perms, $new($ConcurrentHashMap));
	}
}

void CryptoPermissions::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, permTable, $new($Hashtable, static_cast<$Map*>(static_cast<$AbstractMap*>(this->perms))));
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("perms"_s, $of(permTable));
	s->writeFields();
}

void clinit$CryptoPermissions($Class* class$) {
	$load($Hashtable);
	$assignStatic(CryptoPermissions::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "perms"_s, $Hashtable::class$)}));
}

CryptoPermissions::CryptoPermissions() {
}

$Class* CryptoPermissions::load$($String* name, bool initialize) {
	$loadClass(CryptoPermissions, name, initialize, &_CryptoPermissions_ClassInfo_, clinit$CryptoPermissions, allocate$CryptoPermissions);
	return class$;
}

$Class* CryptoPermissions::class$ = nullptr;

	} // crypto
} // javax