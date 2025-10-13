#ifndef _jdk_internal_org_objectweb_asm$_ClassReader_h_
#define _jdk_internal_org_objectweb_asm$_ClassReader_h_
//$ class jdk.internal.org.objectweb.asm.ClassReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EXPAND_ASM_INSNS")
#undef EXPAND_ASM_INSNS
#pragma push_macro("EXPAND_FRAMES")
#undef EXPAND_FRAMES
#pragma push_macro("INPUT_STREAM_DATA_CHUNK_SIZE")
#undef INPUT_STREAM_DATA_CHUNK_SIZE
#pragma push_macro("SKIP_CODE")
#undef SKIP_CODE
#pragma push_macro("SKIP_DEBUG")
#undef SKIP_DEBUG
#pragma push_macro("SKIP_FRAMES")
#undef SKIP_FRAMES

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Attribute;
					class ClassVisitor;
					class ConstantDynamic;
					class Context;
					class Label;
					class MethodVisitor;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $export ClassReader : public ::java::lang::Object {
	$class(ClassReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassReader();
	void init$($bytes* classFile);
	void init$($bytes* classFileBuffer, int32_t classFileOffset, int32_t classFileLength);
	void init$($bytes* classFileBuffer, int32_t classFileOffset, bool checkClassVersion);
	void init$(::java::io::InputStream* inputStream);
	void init$($String* className);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, int32_t parsingOptions);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, $Array<::jdk::internal::org::objectweb::asm$::Attribute>* attributePrototypes, int32_t parsingOptions);
	void computeImplicitFrame(::jdk::internal::org::objectweb::asm$::Context* context);
	void createDebugLabel(int32_t bytecodeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	::jdk::internal::org::objectweb::asm$::Label* createLabel(int32_t bytecodeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual int32_t getAccess();
	virtual $String* getClassName();
	int32_t getFirstAttributeOffset();
	virtual $StringArray* getInterfaces();
	virtual int32_t getItem(int32_t constantPoolEntryIndex);
	virtual int32_t getItemCount();
	virtual int32_t getMaxStringLength();
	virtual $String* getSuperName();
	int32_t getTypeAnnotationBytecodeOffset($ints* typeAnnotationOffsets, int32_t typeAnnotationIndex);
	::jdk::internal::org::objectweb::asm$::Attribute* readAttribute($Array<::jdk::internal::org::objectweb::asm$::Attribute>* attributePrototypes, $String* type, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeAttributeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	$ints* readBootstrapMethodsAttribute(int32_t maxStringLength);
	virtual int32_t readByte(int32_t offset);
	virtual $String* readClass(int32_t offset, $chars* charBuffer);
	void readCode(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t codeOffset);
	virtual $Object* readConst(int32_t constantPoolEntryIndex, $chars* charBuffer);
	::jdk::internal::org::objectweb::asm$::ConstantDynamic* readConstantDynamic(int32_t constantPoolEntryIndex, $chars* charBuffer);
	int32_t readElementValue(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, int32_t elementValueOffset, $String* elementName, $chars* charBuffer);
	int32_t readElementValues(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, int32_t annotationOffset, bool named, $chars* charBuffer);
	int32_t readField(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t fieldInfoOffset);
	virtual int32_t readInt(int32_t offset);
	virtual ::jdk::internal::org::objectweb::asm$::Label* readLabel(int32_t bytecodeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual int64_t readLong(int32_t offset);
	int32_t readMethod(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t methodInfoOffset);
	virtual $String* readModule(int32_t offset, $chars* charBuffer);
	void readModuleAttributes(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t moduleOffset, int32_t modulePackagesOffset, $String* moduleMainClass);
	virtual $String* readPackage(int32_t offset, $chars* charBuffer);
	void readParameterAnnotations(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t runtimeParameterAnnotationsOffset, bool visible);
	int32_t readRecordComponent(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t recordComponentOffset);
	virtual int16_t readShort(int32_t offset);
	int32_t readStackMapFrame(int32_t stackMapFrameOffset, bool compressed, bool expand, ::jdk::internal::org::objectweb::asm$::Context* context);
	static $bytes* readStream(::java::io::InputStream* inputStream, bool close);
	$String* readStringish(int32_t offset, $chars* charBuffer);
	int32_t readTypeAnnotationTarget(::jdk::internal::org::objectweb::asm$::Context* context, int32_t typeAnnotationOffset);
	$ints* readTypeAnnotations(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::Context* context, int32_t runtimeTypeAnnotationsOffset, bool visible);
	virtual $String* readUTF8(int32_t offset, $chars* charBuffer);
	virtual int32_t readUnsignedShort(int32_t offset);
	$String* readUtf(int32_t constantPoolEntryIndex, $chars* charBuffer);
	$String* readUtf(int32_t utfOffset, int32_t utfLength, $chars* charBuffer);
	int32_t readVerificationTypeInfo(int32_t verificationTypeInfoOffset, $ObjectArray* frame, int32_t index, $chars* charBuffer, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	static const int32_t SKIP_CODE = 1;
	static const int32_t SKIP_DEBUG = 2;
	static const int32_t SKIP_FRAMES = 4;
	static const int32_t EXPAND_FRAMES = 8;
	static const int32_t EXPAND_ASM_INSNS = 256;
	static const int32_t INPUT_STREAM_DATA_CHUNK_SIZE = 4096;
	$bytes* b = nullptr;
	$bytes* classFileBuffer = nullptr;
	$ints* cpInfoOffsets = nullptr;
	$StringArray* constantUtf8Values = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::ConstantDynamic>* constantDynamicValues = nullptr;
	$ints* bootstrapMethodOffsets = nullptr;
	int32_t maxStringLength = 0;
	int32_t header = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("EXPAND_ASM_INSNS")
#pragma pop_macro("EXPAND_FRAMES")
#pragma pop_macro("INPUT_STREAM_DATA_CHUNK_SIZE")
#pragma pop_macro("SKIP_CODE")
#pragma pop_macro("SKIP_DEBUG")
#pragma pop_macro("SKIP_FRAMES")

#endif // _jdk_internal_org_objectweb_asm$_ClassReader_h_