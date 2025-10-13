#include <sun/security/provider/AbstractHashDrbg.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/security/provider/AbstractDrbg.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef DEFAULT_STRENGTH
#undef ROOT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $AbstractDrbg = ::sun::security::provider::AbstractDrbg;
using $Debug = ::sun::security::util::Debug;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _AbstractHashDrbg_FieldInfo_[] = {
	{"outLen", "I", nullptr, $PROTECTED, $field(AbstractHashDrbg, outLen)},
	{"seedLen", "I", nullptr, $PROTECTED, $field(AbstractHashDrbg, seedLen)},
	{}
};

$MethodInfo _AbstractHashDrbg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractHashDrbg::*)()>(&AbstractHashDrbg::init$))},
	{"alg2strength", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&AbstractHashDrbg::alg2strength))},
	{"chooseAlgorithmAndStrength", "()V", nullptr, $PROTECTED},
	{"hashReseedInternal", "(Ljava/util/List;)V", "(Ljava/util/List<[B>;)V", $PROTECTED | $ABSTRACT},
	{"instantiateAlgorithm", "([B)V", nullptr, $PUBLIC},
	{"reseedAlgorithm", "([B[B)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AbstractHashDrbg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.provider.AbstractHashDrbg",
	"sun.security.provider.AbstractDrbg",
	nullptr,
	_AbstractHashDrbg_FieldInfo_,
	_AbstractHashDrbg_MethodInfo_
};

$Object* allocate$AbstractHashDrbg($Class* clazz) {
	return $of($alloc(AbstractHashDrbg));
}

void AbstractHashDrbg::init$() {
	$AbstractDrbg::init$();
}

int32_t AbstractHashDrbg::alg2strength($String* algorithm) {
	$init(AbstractHashDrbg);
	{
		$init($Locale);
		$var($String, s1546$, $nc(algorithm)->toUpperCase($Locale::ROOT));
		int32_t tmp1546$ = -1;
		switch (s1546$->hashCode()) {
		case (int32_t)0xA52B5133:
			{
				if (s1546$->equals("SHA-224"_s)) {
					tmp1546$ = 0;
				}
				break;
			}
		case 0x2CE1493A:
			{
				if (s1546$->equals("SHA-512/224"_s)) {
					tmp1546$ = 1;
				}
				break;
			}
		case (int32_t)0xA52B5192:
			{
				if (s1546$->equals("SHA-256"_s)) {
					tmp1546$ = 2;
				}
				break;
			}
		case 0x2CE14999:
			{
				if (s1546$->equals("SHA-512/256"_s)) {
					tmp1546$ = 3;
				}
				break;
			}
		case (int32_t)0xA52B55AE:
			{
				if (s1546$->equals("SHA-384"_s)) {
					tmp1546$ = 4;
				}
				break;
			}
		case (int32_t)0xA52B5C55:
			{
				if (s1546$->equals("SHA-512"_s)) {
					tmp1546$ = 5;
				}
				break;
			}
		}
		switch (tmp1546$) {
		case 0:
			{}
		case 1:
			{
				return 192;
			}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{
				return 256;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({algorithm, " not supported in Hash_DBRG"_s}));
			}
		}
	}
}

void AbstractHashDrbg::chooseAlgorithmAndStrength() {
	if (this->requestedAlgorithm != nullptr) {
		$init($Locale);
		$set(this, algorithm, $nc(this->requestedAlgorithm)->toUpperCase($Locale::ROOT));
		int32_t supportedStrength = alg2strength(this->algorithm);
		if (this->requestedInstantiationSecurityStrength >= 0) {
			int32_t tryStrength = getStandardStrength(this->requestedInstantiationSecurityStrength);
			if (tryStrength > supportedStrength) {
				$throwNew($IllegalArgumentException, $$str({this->algorithm, " does not support strength "_s, $$str(this->requestedInstantiationSecurityStrength)}));
			}
			this->securityStrength = tryStrength;
		} else {
			this->securityStrength = $AbstractDrbg::DEFAULT_STRENGTH > supportedStrength ? supportedStrength : $AbstractDrbg::DEFAULT_STRENGTH;
		}
	} else {
		int32_t tryStrength = (this->requestedInstantiationSecurityStrength < 0) ? $AbstractDrbg::DEFAULT_STRENGTH : this->requestedInstantiationSecurityStrength;
		tryStrength = getStandardStrength(tryStrength);
		$set(this, algorithm, "SHA-256"_s);
		this->securityStrength = tryStrength;
	}
	{
		$init($Locale);
		$var($String, s3372$, $nc(this->algorithm)->toUpperCase($Locale::ROOT));
		int32_t tmp3372$ = -1;
		switch (s3372$->hashCode()) {
		case (int32_t)0xA52B5133:
			{
				if (s3372$->equals("SHA-224"_s)) {
					tmp3372$ = 0;
				}
				break;
			}
		case 0x2CE1493A:
			{
				if (s3372$->equals("SHA-512/224"_s)) {
					tmp3372$ = 1;
				}
				break;
			}
		case (int32_t)0xA52B5192:
			{
				if (s3372$->equals("SHA-256"_s)) {
					tmp3372$ = 2;
				}
				break;
			}
		case 0x2CE14999:
			{
				if (s3372$->equals("SHA-512/256"_s)) {
					tmp3372$ = 3;
				}
				break;
			}
		case (int32_t)0xA52B55AE:
			{
				if (s3372$->equals("SHA-384"_s)) {
					tmp3372$ = 4;
				}
				break;
			}
		case (int32_t)0xA52B5C55:
			{
				if (s3372$->equals("SHA-512"_s)) {
					tmp3372$ = 5;
				}
				break;
			}
		}
		switch (tmp3372$) {
		case 0:
			{}
		case 1:
			{
				this->seedLen = 440 / 8;
				this->outLen = 224 / 8;
				break;
			}
		case 2:
			{}
		case 3:
			{
				this->seedLen = 440 / 8;
				this->outLen = 256 / 8;
				break;
			}
		case 4:
			{
				this->seedLen = 888 / 8;
				this->outLen = 384 / 8;
				break;
			}
		case 5:
			{
				this->seedLen = 888 / 8;
				this->outLen = 512 / 8;
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({this->algorithm, " not supported in Hash_DBRG"_s}));
			}
		}
	}
	this->minLength = this->securityStrength / 8;
}

void AbstractHashDrbg::instantiateAlgorithm($bytes* entropy) {
	$init($AbstractDrbg);
	if ($AbstractDrbg::debug != nullptr) {
		$nc($AbstractDrbg::debug)->println($of(this), "instantiate"_s);
	}
	$var($List, inputs, $new($ArrayList, 3));
	inputs->add(entropy);
	inputs->add(this->nonce);
	if (this->personalizationString != nullptr) {
		inputs->add(this->personalizationString);
	}
	hashReseedInternal(inputs);
}

void AbstractHashDrbg::reseedAlgorithm($bytes* ei, $bytes* additionalInput) {
	$init($AbstractDrbg);
	if ($AbstractDrbg::debug != nullptr) {
		$var($String, var$0, $$str({"reseedAlgorithm\n"_s, $($$new($HexDumpEncoder)->encodeBuffer(ei)), "\n"_s}));
		$nc($AbstractDrbg::debug)->println($of(this), $$concat(var$0, ((additionalInput == nullptr) ? ""_s : $($$new($HexDumpEncoder)->encodeBuffer(additionalInput)))));
	}
	$var($List, inputs, $new($ArrayList, 2));
	inputs->add(ei);
	if (additionalInput != nullptr) {
		inputs->add(additionalInput);
	}
	hashReseedInternal(inputs);
}

AbstractHashDrbg::AbstractHashDrbg() {
}

$Class* AbstractHashDrbg::load$($String* name, bool initialize) {
	$loadClass(AbstractHashDrbg, name, initialize, &_AbstractHashDrbg_ClassInfo_, allocate$AbstractHashDrbg);
	return class$;
}

$Class* AbstractHashDrbg::class$ = nullptr;

		} // provider
	} // security
} // sun