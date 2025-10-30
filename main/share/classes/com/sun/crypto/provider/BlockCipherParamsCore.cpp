#include <com/sun/crypto/provider/BlockCipherParamsCore.h>

#include <java/io/IOException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/util/Arrays.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef LINE_SEP

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $Arrays = ::java::util::Arrays;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _BlockCipherParamsCore_FieldInfo_[] = {
	{"block_size", "I", nullptr, $PRIVATE, $field(BlockCipherParamsCore, block_size)},
	{"iv", "[B", nullptr, $PRIVATE, $field(BlockCipherParamsCore, iv)},
	{"moreSizes", "[I", nullptr, $PRIVATE, $field(BlockCipherParamsCore, moreSizes)},
	{}
};

$MethodInfo _BlockCipherParamsCore_MethodInfo_[] = {
	{"<init>", "(I[I)V", nullptr, $TRANSIENT, $method(static_cast<void(BlockCipherParamsCore::*)(int32_t,$ints*)>(&BlockCipherParamsCore::init$))},
	{"getEncoded", "()[B", nullptr, 0, $method(static_cast<$bytes*(BlockCipherParamsCore::*)()>(&BlockCipherParamsCore::getEncoded)), "java.io.IOException"},
	{"getEncoded", "(Ljava/lang/String;)[B", nullptr, 0, $method(static_cast<$bytes*(BlockCipherParamsCore::*)($String*)>(&BlockCipherParamsCore::getEncoded)), "java.io.IOException"},
	{"getParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", 0, $method(static_cast<$AlgorithmParameterSpec*(BlockCipherParamsCore::*)($Class*)>(&BlockCipherParamsCore::getParameterSpec)), "java.security.spec.InvalidParameterSpecException"},
	{"init", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(BlockCipherParamsCore::*)($AlgorithmParameterSpec*)>(&BlockCipherParamsCore::init)), "java.security.spec.InvalidParameterSpecException"},
	{"init", "([B)V", nullptr, 0, $method(static_cast<void(BlockCipherParamsCore::*)($bytes*)>(&BlockCipherParamsCore::init)), "java.io.IOException"},
	{"init", "([BLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(BlockCipherParamsCore::*)($bytes*,$String*)>(&BlockCipherParamsCore::init)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BlockCipherParamsCore_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.BlockCipherParamsCore",
	"java.lang.Object",
	nullptr,
	_BlockCipherParamsCore_FieldInfo_,
	_BlockCipherParamsCore_MethodInfo_
};

$Object* allocate$BlockCipherParamsCore($Class* clazz) {
	return $of($alloc(BlockCipherParamsCore));
}

void BlockCipherParamsCore::init$(int32_t blksize, $ints* moreSizes) {
	this->block_size = 0;
	$set(this, iv, nullptr);
	$set(this, moreSizes, nullptr);
	this->block_size = blksize;
	$set(this, moreSizes, moreSizes);
}

void BlockCipherParamsCore::init($AlgorithmParameterSpec* paramSpec) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($IvParameterSpec, paramSpec))) {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
	$var($bytes, tmpIv, $nc(($cast($IvParameterSpec, paramSpec)))->getIV());
	bool check = ($nc(tmpIv)->length == this->block_size);
	if (!check && this->moreSizes != nullptr) {
		{
			$var($ints, arr$, this->moreSizes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t s = arr$->get(i$);
				{
					if (tmpIv->length == s) {
						check = true;
						break;
					}
				}
			}
		}
	}
	if (!check) {
		$var($String, expectedLen, $str({$$str(this->block_size), (this->moreSizes == nullptr ? ""_s : $($Arrays::toString(this->moreSizes)))}));
		$throwNew($InvalidParameterSpecException, $$str({"IV length not "_s, expectedLen, " bytes long"_s}));
	}
	$set(this, iv, $cast($bytes, tmpIv->clone()));
}

void BlockCipherParamsCore::init($bytes* encoded) {
	$useLocalCurrentObjectStackCache();
	$var($DerInputStream, der, $new($DerInputStream, encoded));
	$var($bytes, tmpIv, der->getOctetString());
	if (der->available() != 0) {
		$throwNew($IOException, "IV parsing error: extra data"_s);
	}
	bool check = ($nc(tmpIv)->length == this->block_size);
	if (!check) {
		$var($String, expectedLen, $str({$$str(this->block_size), (this->moreSizes == nullptr ? ""_s : $($Arrays::toString(this->moreSizes)))}));
		$throwNew($IOException, $$str({"IV not "_s, expectedLen, " bytes long"_s}));
	}
	$set(this, iv, tmpIv);
}

void BlockCipherParamsCore::init($bytes* encoded, $String* decodingMethod) {
	if ((decodingMethod != nullptr) && (!decodingMethod->equalsIgnoreCase("ASN.1"_s))) {
		$throwNew($IllegalArgumentException, "Only support ASN.1 format"_s);
	}
	init(encoded);
}

$AlgorithmParameterSpec* BlockCipherParamsCore::getParameterSpec($Class* paramSpec) {
	$load($IvParameterSpec);
	if ($IvParameterSpec::class$->isAssignableFrom(paramSpec)) {
		return $cast($AlgorithmParameterSpec, $nc(paramSpec)->cast($$new($IvParameterSpec, this->iv)));
	} else {
		$throwNew($InvalidParameterSpecException, "Inappropriate parameter specification"_s);
	}
}

$bytes* BlockCipherParamsCore::getEncoded() {
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->putOctetString(this->iv);
	return out->toByteArray();
}

$bytes* BlockCipherParamsCore::getEncoded($String* encodingMethod) {
	return getEncoded();
}

$String* BlockCipherParamsCore::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($String, ivString, $str({LINE_SEP, "    iv:"_s, LINE_SEP, "["_s}));
	$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
	$plusAssign(ivString, $(encoder->encodeBuffer(this->iv)));
	$plusAssign(ivString, $$str({"]"_s, LINE_SEP}));
	return ivString;
}

BlockCipherParamsCore::BlockCipherParamsCore() {
}

$Class* BlockCipherParamsCore::load$($String* name, bool initialize) {
	$loadClass(BlockCipherParamsCore, name, initialize, &_BlockCipherParamsCore_ClassInfo_, allocate$BlockCipherParamsCore);
	return class$;
}

$Class* BlockCipherParamsCore::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com