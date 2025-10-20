#include <java/security/MessageDigest.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/MessageDigest$Delegate.h>
#include <java/security/MessageDigestSpi.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef INITIAL
#undef IN_PROGRESS

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageDigest$Delegate = ::java::security::MessageDigest$Delegate;
using $MessageDigestSpi = ::java::security::MessageDigestSpi;
using $Provider = ::java::security::Provider;
using $Security = ::java::security::Security;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _MessageDigest_FieldInfo_[] = {
	{"pdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MessageDigest, pdebug)},
	{"skipDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MessageDigest, skipDebug)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MessageDigest, algorithm)},
	{"INITIAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MessageDigest, INITIAL)},
	{"IN_PROGRESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MessageDigest, IN_PROGRESS)},
	{"state", "I", nullptr, $PRIVATE, $field(MessageDigest, state)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(MessageDigest, provider)},
	{}
};

$MethodInfo _MessageDigest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(MessageDigest::*)($String*)>(&MessageDigest::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PRIVATE, $method(static_cast<void(MessageDigest::*)($String*,$Provider*)>(&MessageDigest::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"digest", "()[B", nullptr, $PUBLIC},
	{"digest", "([BII)I", nullptr, $PUBLIC, nullptr, "java.security.DigestException"},
	{"digest", "([B)[B", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(MessageDigest::*)()>(&MessageDigest::getAlgorithm))},
	{"getDigestLength", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(MessageDigest::*)()>(&MessageDigest::getDigestLength))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/MessageDigest;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MessageDigest*(*)($String*)>(&MessageDigest::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MessageDigest*(*)($String*,$String*)>(&MessageDigest::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MessageDigest*(*)($String*,$Provider*)>(&MessageDigest::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(MessageDigest::*)()>(&MessageDigest::getProvider))},
	{"getProviderName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MessageDigest::*)()>(&MessageDigest::getProviderName))},
	{"isEqual", "([B[B)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,$bytes*)>(&MessageDigest::isEqual))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(B)V", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{"update", "([B)V", nullptr, $PUBLIC},
	{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(MessageDigest::*)($ByteBuffer*)>(&MessageDigest::update))},
	{}
};

$InnerClassInfo _MessageDigest_InnerClassesInfo_[] = {
	{"java.security.MessageDigest$Delegate", "java.security.MessageDigest", "Delegate", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MessageDigest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.MessageDigest",
	"java.security.MessageDigestSpi",
	nullptr,
	_MessageDigest_FieldInfo_,
	_MessageDigest_MethodInfo_,
	nullptr,
	nullptr,
	_MessageDigest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.MessageDigest$Delegate,java.security.MessageDigest$Delegate$CloneableDelegate"
};

$Object* allocate$MessageDigest($Class* clazz) {
	return $of($alloc(MessageDigest));
}

$Debug* MessageDigest::pdebug = nullptr;
bool MessageDigest::skipDebug = false;

void MessageDigest::init$($String* algorithm) {
	$MessageDigestSpi::init$();
	this->state = MessageDigest::INITIAL;
	$set(this, algorithm, algorithm);
}

void MessageDigest::init$($String* algorithm, $Provider* p) {
	$MessageDigestSpi::init$();
	this->state = MessageDigest::INITIAL;
	$set(this, algorithm, algorithm);
	$set(this, provider, p);
}

MessageDigest* MessageDigest::getInstance($String* algorithm) {
	$init(MessageDigest);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$var(MessageDigest, md, nullptr);
	$load($MessageDigestSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("MessageDigest"_s, $MessageDigestSpi::class$, algorithm));
	{
		$var(MessageDigest, messageDigest, nullptr);
		$var($Object, patt7388$temp, $nc(instance)->impl);
		bool var$0 = $instanceOf(MessageDigest, patt7388$temp);
		if (var$0) {
			$assign(messageDigest, $cast(MessageDigest, patt7388$temp));
			var$0 = true;
		}
		if (var$0) {
			$assign(md, messageDigest);
			$set($nc(md), provider, $nc(instance)->provider);
		} else {
			$assign(md, $MessageDigest$Delegate::of($cast($MessageDigestSpi, $nc(instance)->impl), algorithm, instance->provider));
		}
	}
	if (!MessageDigest::skipDebug && MessageDigest::pdebug != nullptr) {
		$nc(MessageDigest::pdebug)->println($$str({"MessageDigest."_s, algorithm, " algorithm from: "_s, $($nc($nc(md)->provider)->getName())}));
	}
	return md;
}

MessageDigest* MessageDigest::getInstance($String* algorithm, $String* provider) {
	$init(MessageDigest);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if (provider == nullptr || $nc(provider)->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var(MessageDigest, md, nullptr);
	$load($MessageDigestSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("MessageDigest"_s, $MessageDigestSpi::class$, algorithm, provider));
	{
		$var(MessageDigest, messageDigest, nullptr);
		$var($Object, patt9908$temp, $nc(instance)->impl);
		bool var$0 = $instanceOf(MessageDigest, patt9908$temp);
		if (var$0) {
			$assign(messageDigest, $cast(MessageDigest, patt9908$temp));
			var$0 = true;
		}
		if (var$0) {
			$assign(md, messageDigest);
			$set($nc(md), provider, $nc(instance)->provider);
		} else {
			$assign(md, $MessageDigest$Delegate::of($cast($MessageDigestSpi, $nc(instance)->impl), algorithm, instance->provider));
		}
	}
	return md;
}

MessageDigest* MessageDigest::getInstance($String* algorithm, $Provider* provider) {
	$init(MessageDigest);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($ObjectArray, objs, $Security::getImpl(algorithm, "MessageDigest"_s, provider));
	{
		$var(MessageDigest, md, nullptr);
		$var($Object0, patt11918$temp, $nc(objs)->get(0));
		bool var$0 = $instanceOf(MessageDigest, patt11918$temp);
		if (var$0) {
			$assign(md, $cast(MessageDigest, patt11918$temp));
			var$0 = true;
		}
		if (var$0) {
			$set($nc(md), provider, $cast($Provider, $nc(objs)->get(1)));
			return md;
		} else {
			$var(MessageDigest, delegate, $MessageDigest$Delegate::of($cast($MessageDigestSpi, $nc(objs)->get(0)), algorithm, $cast($Provider, objs->get(1))));
			return delegate;
		}
	}
}

$Provider* MessageDigest::getProvider() {
	return this->provider;
}

void MessageDigest::update(int8_t input) {
	engineUpdate(input);
	this->state = MessageDigest::IN_PROGRESS;
}

void MessageDigest::update($bytes* input, int32_t offset, int32_t len) {
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "No input buffer given"_s);
	}
	if ($nc(input)->length - offset < len) {
		$throwNew($IllegalArgumentException, "Input buffer too short"_s);
	}
	engineUpdate(input, offset, len);
	this->state = MessageDigest::IN_PROGRESS;
}

void MessageDigest::update($bytes* input) {
	engineUpdate(input, 0, $nc(input)->length);
	this->state = MessageDigest::IN_PROGRESS;
}

void MessageDigest::update($ByteBuffer* input) {
	if (input == nullptr) {
		$throwNew($NullPointerException);
	}
	engineUpdate(input);
	this->state = MessageDigest::IN_PROGRESS;
}

$bytes* MessageDigest::digest() {
	$var($bytes, result, engineDigest());
	this->state = MessageDigest::INITIAL;
	return result;
}

int32_t MessageDigest::digest($bytes* buf, int32_t offset, int32_t len) {
	if (buf == nullptr) {
		$throwNew($IllegalArgumentException, "No output buffer given"_s);
	}
	if ($nc(buf)->length - offset < len) {
		$throwNew($IllegalArgumentException, "Output buffer too small for specified offset and length"_s);
	}
	int32_t numBytes = engineDigest(buf, offset, len);
	this->state = MessageDigest::INITIAL;
	return numBytes;
}

$bytes* MessageDigest::digest($bytes* input) {
	update(input);
	return digest();
}

$String* MessageDigest::getProviderName() {
	return (this->provider == nullptr) ? "(no provider)"_s : $nc(this->provider)->getName();
}

$String* MessageDigest::toString() {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($PrintStream, p, $new($PrintStream, static_cast<$OutputStream*>(baos)));
	p->print($$str({this->algorithm, " Message Digest from "_s, $(getProviderName()), ", "_s}));
	switch (this->state) {
	case MessageDigest::INITIAL:
		{
			p->print("<initialized>"_s);
			break;
		}
	case MessageDigest::IN_PROGRESS:
		{
			p->print("<in progress>"_s);
			break;
		}
	}
	p->println();
	return (baos->toString());
}

bool MessageDigest::isEqual($bytes* digesta, $bytes* digestb) {
	$init(MessageDigest);
	if (digesta == digestb) {
		return true;
	}
	if (digesta == nullptr || digestb == nullptr) {
		return false;
	}
	int32_t lenA = $nc(digesta)->length;
	int32_t lenB = $nc(digestb)->length;
	if (lenB == 0) {
		return lenA == 0;
	}
	int32_t result = 0;
	result |= lenA - lenB;
	for (int32_t i = 0; i < lenA; ++i) {
		int32_t indexB = ((int32_t)((uint32_t)(i - lenB) >> 31)) * i;
		result |= digesta->get(i) ^ digestb->get(indexB);
	}
	return result == 0;
}

void MessageDigest::reset() {
	engineReset();
	this->state = MessageDigest::INITIAL;
}

$String* MessageDigest::getAlgorithm() {
	return this->algorithm;
}

int32_t MessageDigest::getDigestLength() {
	$useLocalCurrentObjectStackCache();
	int32_t digestLen = engineGetDigestLength();
	if (digestLen == 0) {
		try {
			$var(MessageDigest, md, $cast(MessageDigest, clone()));
			$var($bytes, digest, $nc(md)->digest());
			return $nc(digest)->length;
		} catch ($CloneNotSupportedException&) {
			$var($CloneNotSupportedException, e, $catch());
			return digestLen;
		}
	}
	return digestLen;
}

$Object* MessageDigest::clone() {
	if ($instanceOf($Cloneable, this)) {
		return $of($MessageDigestSpi::clone());
	} else {
		$throwNew($CloneNotSupportedException);
	}
}

void clinit$MessageDigest($Class* class$) {
	$assignStatic(MessageDigest::pdebug, $Debug::getInstance("provider"_s, "Provider"_s));
	bool var$0 = $Debug::isOn("engine="_s);
	MessageDigest::skipDebug = var$0 && !$Debug::isOn("messagedigest"_s);
}

MessageDigest::MessageDigest() {
}

$Class* MessageDigest::load$($String* name, bool initialize) {
	$loadClass(MessageDigest, name, initialize, &_MessageDigest_ClassInfo_, clinit$MessageDigest, allocate$MessageDigest);
	return class$;
}

$Class* MessageDigest::class$ = nullptr;

	} // security
} // java