#include <jdk/internal/org/objectweb/asm/signature/SignatureReader.h>

#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SignatureVisitor = ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace signature {

$FieldInfo _SignatureReader_FieldInfo_[] = {
	{"signatureValue", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SignatureReader, signatureValue)},
	{}
};

$MethodInfo _SignatureReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SignatureReader, init$, void, $String*)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;)V", nullptr, $PUBLIC, $virtualMethod(SignatureReader, accept, void, $SignatureVisitor*)},
	{"acceptType", "(Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;)V", nullptr, $PUBLIC, $virtualMethod(SignatureReader, acceptType, void, $SignatureVisitor*)},
	{"parseType", "(Ljava/lang/String;ILjdk/internal/org/objectweb/asm/signature/SignatureVisitor;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(SignatureReader, parseType, int32_t, $String*, int32_t, $SignatureVisitor*)},
	{}
};

$ClassInfo _SignatureReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.signature.SignatureReader",
	"java.lang.Object",
	nullptr,
	_SignatureReader_FieldInfo_,
	_SignatureReader_MethodInfo_
};

$Object* allocate$SignatureReader($Class* clazz) {
	return $of($alloc(SignatureReader));
}

void SignatureReader::init$($String* signature) {
	$set(this, signatureValue, signature);
}

void SignatureReader::accept($SignatureVisitor* signatureVistor) {
	$useLocalCurrentObjectStackCache();
	$var($String, signature, this->signatureValue);
	int32_t length = $nc(signature)->length();
	int32_t offset = 0;
	char16_t currentChar = 0;
	if (signature->charAt(0) == u'<') {
		offset = 2;
		do {
			int32_t classBoundStartOffset = signature->indexOf((int32_t)u':', offset);
			$nc(signatureVistor)->visitFormalTypeParameter($(signature->substring(offset - 1, classBoundStartOffset)));
			offset = classBoundStartOffset + 1;
			currentChar = signature->charAt(offset);
			if (currentChar == u'L' || currentChar == u'[' || currentChar == u'T') {
				offset = parseType(signature, offset, $(signatureVistor->visitClassBound()));
			}
			while ((currentChar = signature->charAt(offset++)) == u':') {
				offset = parseType(signature, offset, $(signatureVistor->visitInterfaceBound()));
			}
		} while (currentChar != u'>');
	} else {
		offset = 0;
	}
	if (signature->charAt(offset) == u'(') {
		++offset;
		while (signature->charAt(offset) != u')') {
			offset = parseType(signature, offset, $($nc(signatureVistor)->visitParameterType()));
		}
		offset = parseType(signature, offset + 1, $($nc(signatureVistor)->visitReturnType()));
		while (offset < length) {
			offset = parseType(signature, offset + 1, $($nc(signatureVistor)->visitExceptionType()));
		}
	} else {
		offset = parseType(signature, offset, $($nc(signatureVistor)->visitSuperclass()));
		while (offset < length) {
			offset = parseType(signature, offset, $($nc(signatureVistor)->visitInterface()));
		}
	}
}

void SignatureReader::acceptType($SignatureVisitor* signatureVisitor) {
	parseType(this->signatureValue, 0, signatureVisitor);
}

int32_t SignatureReader::parseType($String* signature, int32_t startOffset, $SignatureVisitor* signatureVisitor) {
	$useLocalCurrentObjectStackCache();
	int32_t offset = startOffset;
	char16_t currentChar = $nc(signature)->charAt(offset++);
	{
		int32_t endOffset = 0;
		int32_t start = 0;
		bool visited = false;
		bool inner = false;
		switch (currentChar) {
		case u'Z':
			{}
		case u'C':
			{}
		case u'B':
			{}
		case u'S':
			{}
		case u'I':
			{}
		case u'F':
			{}
		case u'J':
			{}
		case u'D':
			{}
		case u'V':
			{
				$nc(signatureVisitor)->visitBaseType(currentChar);
				return offset;
			}
		case u'[':
			{
				return parseType(signature, offset, $($nc(signatureVisitor)->visitArrayType()));
			}
		case u'T':
			{
				endOffset = signature->indexOf((int32_t)u';', offset);
				$nc(signatureVisitor)->visitTypeVariable($(signature->substring(offset, endOffset)));
				return endOffset + 1;
			}
		case u'L':
			{
				start = offset;
				visited = false;
				inner = false;
				while (true) {
					currentChar = signature->charAt(offset++);
					if (currentChar == u'.' || currentChar == u';') {
						if (!visited) {
							$var($String, name, signature->substring(start, offset - 1));
							if (inner) {
								$nc(signatureVisitor)->visitInnerClassType(name);
							} else {
								$nc(signatureVisitor)->visitClassType(name);
							}
						}
						if (currentChar == u';') {
							$nc(signatureVisitor)->visitEnd();
							break;
						}
						start = offset;
						visited = false;
						inner = true;
					} else if (currentChar == u'<') {
						$var($String, name, signature->substring(start, offset - 1));
						if (inner) {
							$nc(signatureVisitor)->visitInnerClassType(name);
						} else {
							$nc(signatureVisitor)->visitClassType(name);
						}
						visited = true;
						while ((currentChar = signature->charAt(offset)) != u'>') {
							switch (currentChar) {
							case u'*':
								{
									++offset;
									$nc(signatureVisitor)->visitTypeArgument();
									break;
								}
							case u'+':
								{}
							case u'-':
								{
									offset = parseType(signature, offset + 1, $($nc(signatureVisitor)->visitTypeArgument(currentChar)));
									break;
								}
							default:
								{
									offset = parseType(signature, offset, $($nc(signatureVisitor)->visitTypeArgument(u'=')));
									break;
								}
							}
						}
					}
				}
				return offset;
			}
		default:
			{
				$throwNew($IllegalArgumentException);
			}
		}
	}
}

SignatureReader::SignatureReader() {
}

$Class* SignatureReader::load$($String* name, bool initialize) {
	$loadClass(SignatureReader, name, initialize, &_SignatureReader_ClassInfo_, allocate$SignatureReader);
	return class$;
}

$Class* SignatureReader::class$ = nullptr;

					} // signature
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk