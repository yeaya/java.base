#include <java/nio/charset/CharsetEncoder.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderMalfunctionError.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef IGNORE
#undef OVERFLOW
#undef REPLACE
#undef REPORT
#undef ST_CODING
#undef ST_END
#undef ST_FLUSHED
#undef ST_RESET
#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderMalfunctionError = ::java::nio::charset::CoderMalfunctionError;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _CharsetEncoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CharsetEncoder, $assertionsDisabled)},
	{"charset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $FINAL, $field(CharsetEncoder, charset$)},
	{"averageBytesPerChar", "F", nullptr, $PRIVATE | $FINAL, $field(CharsetEncoder, averageBytesPerChar$)},
	{"maxBytesPerChar", "F", nullptr, $PRIVATE | $FINAL, $field(CharsetEncoder, maxBytesPerChar$)},
	{"replacement", "[B", nullptr, $PRIVATE, $field(CharsetEncoder, replacement$)},
	{"malformedInputAction", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PRIVATE, $field(CharsetEncoder, malformedInputAction$)},
	{"unmappableCharacterAction", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PRIVATE, $field(CharsetEncoder, unmappableCharacterAction$)},
	{"ST_RESET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetEncoder, ST_RESET)},
	{"ST_CODING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetEncoder, ST_CODING)},
	{"ST_END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetEncoder, ST_END)},
	{"ST_FLUSHED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetEncoder, ST_FLUSHED)},
	{"state", "I", nullptr, $PRIVATE, $field(CharsetEncoder, state)},
	{"stateNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CharsetEncoder, stateNames)},
	{"cachedDecoder", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/nio/charset/CharsetDecoder;>;", $PRIVATE, $field(CharsetEncoder, cachedDecoder)},
	{}
};

$MethodInfo _CharsetEncoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;FF[B)V", nullptr, $PROTECTED, $method(static_cast<void(CharsetEncoder::*)($Charset*,float,float,$bytes*)>(&CharsetEncoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;FF)V", nullptr, $PROTECTED, $method(static_cast<void(CharsetEncoder::*)($Charset*,float,float)>(&CharsetEncoder::init$))},
	{"averageBytesPerChar", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(CharsetEncoder::*)()>(&CharsetEncoder::averageBytesPerChar))},
	{"canEncode", "(Ljava/nio/CharBuffer;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CharsetEncoder::*)($CharBuffer*)>(&CharsetEncoder::canEncode))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"canEncode", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC},
	{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Charset*(CharsetEncoder::*)()>(&CharsetEncoder::charset))},
	{"encode", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CoderResult*(CharsetEncoder::*)($CharBuffer*,$ByteBuffer*,bool)>(&CharsetEncoder::encode))},
	{"encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ByteBuffer*(CharsetEncoder::*)($CharBuffer*)>(&CharsetEncoder::encode)), "java.nio.charset.CharacterCodingException"},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED | $ABSTRACT},
	{"flush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CoderResult*(CharsetEncoder::*)($ByteBuffer*)>(&CharsetEncoder::flush))},
	{"implFlush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implOnMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED},
	{"implOnUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED},
	{"implReplaceWith", "([B)V", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{"malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC},
	{"maxBytesPerChar", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(CharsetEncoder::*)()>(&CharsetEncoder::maxBytesPerChar))},
	{"onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetEncoder*(CharsetEncoder::*)($CodingErrorAction*)>(&CharsetEncoder::onMalformedInput))},
	{"onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetEncoder*(CharsetEncoder::*)($CodingErrorAction*)>(&CharsetEncoder::onUnmappableCharacter))},
	{"replaceWith", "([B)Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetEncoder*(CharsetEncoder::*)($bytes*)>(&CharsetEncoder::replaceWith))},
	{"replacement", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(CharsetEncoder::*)()>(&CharsetEncoder::replacement))},
	{"reset", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetEncoder*(CharsetEncoder::*)()>(&CharsetEncoder::reset))},
	{"throwIllegalStateException", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(CharsetEncoder::*)(int32_t,int32_t)>(&CharsetEncoder::throwIllegalStateException))},
	{"unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharsetEncoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.charset.CharsetEncoder",
	"java.lang.Object",
	nullptr,
	_CharsetEncoder_FieldInfo_,
	_CharsetEncoder_MethodInfo_
};

$Object* allocate$CharsetEncoder($Class* clazz) {
	return $of($alloc(CharsetEncoder));
}

bool CharsetEncoder::$assertionsDisabled = false;
$StringArray* CharsetEncoder::stateNames = nullptr;

void CharsetEncoder::init$($Charset* cs, float averageBytesPerChar, float maxBytesPerChar, $bytes* replacement) {
	$init($CodingErrorAction);
	$set(this, malformedInputAction$, $CodingErrorAction::REPORT);
	$set(this, unmappableCharacterAction$, $CodingErrorAction::REPORT);
	this->state = CharsetEncoder::ST_RESET;
	$set(this, cachedDecoder, nullptr);
	$set(this, charset$, cs);
	if (!(averageBytesPerChar > 0.0f)) {
		$throwNew($IllegalArgumentException, "Non-positive averageBytesPerChar"_s);
	}
	if (!(maxBytesPerChar > 0.0f)) {
		$throwNew($IllegalArgumentException, "Non-positive maxBytesPerChar"_s);
	}
	if (averageBytesPerChar > maxBytesPerChar) {
		$throwNew($IllegalArgumentException, "averageBytesPerChar exceeds maxBytesPerChar"_s);
	}
	$set(this, replacement$, replacement);
	this->averageBytesPerChar$ = averageBytesPerChar;
	this->maxBytesPerChar$ = maxBytesPerChar;
	replaceWith(replacement);
}

void CharsetEncoder::init$($Charset* cs, float averageBytesPerChar, float maxBytesPerChar) {
	CharsetEncoder::init$(cs, averageBytesPerChar, maxBytesPerChar, $$new($bytes, {(int8_t)u'?'}));
}

$Charset* CharsetEncoder::charset() {
	return this->charset$;
}

$bytes* CharsetEncoder::replacement() {
	return $Arrays::copyOf(this->replacement$, $nc(this->replacement$)->length);
}

CharsetEncoder* CharsetEncoder::replaceWith($bytes* newReplacement) {
	if (newReplacement == nullptr) {
		$throwNew($IllegalArgumentException, "Null replacement"_s);
	}
	int32_t len = $nc(newReplacement)->length;
	if (len == 0) {
		$throwNew($IllegalArgumentException, "Empty replacement"_s);
	}
	if (len > this->maxBytesPerChar$) {
		$throwNew($IllegalArgumentException, "Replacement too long"_s);
	}
	if (!isLegalReplacement(newReplacement)) {
		$throwNew($IllegalArgumentException, "Illegal replacement"_s);
	}
	$set(this, replacement$, $Arrays::copyOf(newReplacement, newReplacement->length));
	implReplaceWith(this->replacement$);
	return this;
}

void CharsetEncoder::implReplaceWith($bytes* newReplacement) {
}

bool CharsetEncoder::isLegalReplacement($bytes* repl) {
	$useLocalCurrentObjectStackCache();
	$var($WeakReference, wr, this->cachedDecoder);
	$var($CharsetDecoder, dec, nullptr);
	if ((wr == nullptr) || (($assign(dec, $cast($CharsetDecoder, $nc(wr)->get()))) == nullptr)) {
		$assign(dec, $nc($(charset()))->newDecoder());
		$init($CodingErrorAction);
		$nc(dec)->onMalformedInput($CodingErrorAction::REPORT);
		dec->onUnmappableCharacter($CodingErrorAction::REPORT);
		$set(this, cachedDecoder, $new($WeakReference, dec));
	} else {
		$nc(dec)->reset();
	}
	$var($ByteBuffer, bb, $ByteBuffer::wrap(repl));
	int32_t var$0 = $nc(bb)->remaining();
	$var($CharBuffer, cb, $CharBuffer::allocate($cast(int32_t, (var$0 * $nc(dec)->maxCharsPerByte()))));
	$var($CoderResult, cr, $nc(dec)->decode(bb, cb, true));
	return !$nc(cr)->isError();
}

$CodingErrorAction* CharsetEncoder::malformedInputAction() {
	return this->malformedInputAction$;
}

CharsetEncoder* CharsetEncoder::onMalformedInput($CodingErrorAction* newAction) {
	if (newAction == nullptr) {
		$throwNew($IllegalArgumentException, "Null action"_s);
	}
	$set(this, malformedInputAction$, newAction);
	implOnMalformedInput(newAction);
	return this;
}

void CharsetEncoder::implOnMalformedInput($CodingErrorAction* newAction) {
}

$CodingErrorAction* CharsetEncoder::unmappableCharacterAction() {
	return this->unmappableCharacterAction$;
}

CharsetEncoder* CharsetEncoder::onUnmappableCharacter($CodingErrorAction* newAction) {
	if (newAction == nullptr) {
		$throwNew($IllegalArgumentException, "Null action"_s);
	}
	$set(this, unmappableCharacterAction$, newAction);
	implOnUnmappableCharacter(newAction);
	return this;
}

void CharsetEncoder::implOnUnmappableCharacter($CodingErrorAction* newAction) {
}

float CharsetEncoder::averageBytesPerChar() {
	return this->averageBytesPerChar$;
}

float CharsetEncoder::maxBytesPerChar() {
	return this->maxBytesPerChar$;
}

$CoderResult* CharsetEncoder::encode($CharBuffer* in, $ByteBuffer* out, bool endOfInput) {
	$useLocalCurrentObjectStackCache();
	int32_t newState = endOfInput ? CharsetEncoder::ST_END : CharsetEncoder::ST_CODING;
	if ((this->state != CharsetEncoder::ST_RESET) && (this->state != CharsetEncoder::ST_CODING) && !(endOfInput && (this->state == CharsetEncoder::ST_END))) {
		throwIllegalStateException(this->state, newState);
	}
	this->state = newState;
	for (;;) {
		$var($CoderResult, cr, nullptr);
		try {
			$assign(cr, encodeLoop(in, out));
		} catch ($RuntimeException& x) {
			$throwNew($CoderMalfunctionError, x);
		}
		if ($nc(cr)->isOverflow()) {
			return cr;
		}
		if ($nc(cr)->isUnderflow()) {
			if (endOfInput && $nc(in)->hasRemaining()) {
				$assign(cr, $CoderResult::malformedForLength(in->remaining()));
			} else {
				return cr;
			}
		}
		$var($CodingErrorAction, action, nullptr);
		if ($nc(cr)->isMalformed()) {
			$assign(action, this->malformedInputAction$);
		} else if (cr->isUnmappable()) {
			$assign(action, this->unmappableCharacterAction$);
		} else if (!CharsetEncoder::$assertionsDisabled) {
			$throwNew($AssertionError, $($of(cr->toString())));
		}
		$init($CodingErrorAction);
		if (action == $CodingErrorAction::REPORT) {
			return cr;
		}
		if (action == $CodingErrorAction::REPLACE) {
			if ($nc(out)->remaining() < $nc(this->replacement$)->length) {
				return $CoderResult::OVERFLOW;
			}
			$nc(out)->put(this->replacement$);
		}
		if ((action == $CodingErrorAction::IGNORE) || (action == $CodingErrorAction::REPLACE)) {
			int32_t var$0 = in->position();
			$nc(in)->position(var$0 + $nc(cr)->length());
			continue;
		}
		if (!CharsetEncoder::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
}

$CoderResult* CharsetEncoder::flush($ByteBuffer* out) {
	if (this->state == CharsetEncoder::ST_END) {
		$var($CoderResult, cr, implFlush(out));
		if ($nc(cr)->isUnderflow()) {
			this->state = CharsetEncoder::ST_FLUSHED;
		}
		return cr;
	}
	if (this->state != CharsetEncoder::ST_FLUSHED) {
		throwIllegalStateException(this->state, CharsetEncoder::ST_FLUSHED);
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* CharsetEncoder::implFlush($ByteBuffer* out) {
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

CharsetEncoder* CharsetEncoder::reset() {
	implReset();
	this->state = CharsetEncoder::ST_RESET;
	return this;
}

void CharsetEncoder::implReset() {
}

$ByteBuffer* CharsetEncoder::encode($CharBuffer* in) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(in)->remaining();
	int32_t n = $cast(int32_t, (var$0 * averageBytesPerChar()));
	$var($ByteBuffer, out, $ByteBuffer::allocate(n));
	if ((n == 0) && (in->remaining() == 0)) {
		return out;
	}
	reset();
	for (;;) {
		$init($CoderResult);
		$var($CoderResult, cr, in->hasRemaining() ? encode(in, out, true) : $CoderResult::UNDERFLOW);
		if ($nc(cr)->isUnderflow()) {
			$assign(cr, flush(out));
		}
		if ($nc(cr)->isUnderflow()) {
			break;
		}
		if ($nc(cr)->isOverflow()) {
			n = 2 * n + 1;
			$var($ByteBuffer, o, $ByteBuffer::allocate(n));
			$nc(out)->flip();
			$nc(o)->put(out);
			$assign(out, o);
			continue;
		}
		$nc(cr)->throwException();
	}
	$nc(out)->flip();
	return out;
}

bool CharsetEncoder::canEncode($CharBuffer* cb) {
	$useLocalCurrentObjectStackCache();
	if (this->state == CharsetEncoder::ST_FLUSHED) {
		reset();
	} else if (this->state != CharsetEncoder::ST_RESET) {
		throwIllegalStateException(this->state, CharsetEncoder::ST_CODING);
	}
	$var($CodingErrorAction, ma, malformedInputAction());
	$var($CodingErrorAction, ua, unmappableCharacterAction());
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				$init($CodingErrorAction);
				onMalformedInput($CodingErrorAction::REPORT);
				onUnmappableCharacter($CodingErrorAction::REPORT);
				encode(cb);
			} catch ($CharacterCodingException& x) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			onMalformedInput(ma);
			onUnmappableCharacter(ua);
			reset();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

bool CharsetEncoder::canEncode(char16_t c) {
	$var($CharBuffer, cb, $CharBuffer::allocate(1));
	$nc(cb)->put(c);
	cb->flip();
	return canEncode(cb);
}

bool CharsetEncoder::canEncode($CharSequence* cs) {
	$useLocalCurrentObjectStackCache();
	$var($CharBuffer, cb, nullptr);
	if ($instanceOf($CharBuffer, cs)) {
		$assign(cb, $nc(($cast($CharBuffer, cs)))->duplicate());
	} else {
		$assign(cb, $CharBuffer::wrap($(static_cast<$CharSequence*>($nc(cs)->toString()))));
	}
	return canEncode(cb);
}

void CharsetEncoder::throwIllegalStateException(int32_t from, int32_t to) {
	$throwNew($IllegalStateException, $$str({"Current state = "_s, $nc(CharsetEncoder::stateNames)->get(from), ", new state = "_s, $nc(CharsetEncoder::stateNames)->get(to)}));
}

void clinit$CharsetEncoder($Class* class$) {
	CharsetEncoder::$assertionsDisabled = !CharsetEncoder::class$->desiredAssertionStatus();
	$assignStatic(CharsetEncoder::stateNames, $new($StringArray, {
		"RESET"_s,
		"CODING"_s,
		"CODING_END"_s,
		"FLUSHED"_s
	}));
}

CharsetEncoder::CharsetEncoder() {
}

$Class* CharsetEncoder::load$($String* name, bool initialize) {
	$loadClass(CharsetEncoder, name, initialize, &_CharsetEncoder_ClassInfo_, clinit$CharsetEncoder, allocate$CharsetEncoder);
	return class$;
}

$Class* CharsetEncoder::class$ = nullptr;

		} // charset
	} // nio
} // java