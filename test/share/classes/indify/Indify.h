#ifndef _indify_Indify_h_
#define _indify_Indify_h_
//$ class indify.Indify
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INSTRUCTION_CONSTANTS")
#undef INSTRUCTION_CONSTANTS
#pragma push_macro("INSTRUCTION_FORMATS")
#undef INSTRUCTION_FORMATS
#pragma push_macro("INSTRUCTION_NAMES")
#undef INSTRUCTION_NAMES
#pragma push_macro("INSTRUCTION_INFO")
#undef INSTRUCTION_INFO
#pragma push_macro("INSTRUCTION_POPS")
#undef INSTRUCTION_POPS
#pragma push_macro("WIDE_SIGNATURE")
#undef WIDE_SIGNATURE
#pragma push_macro("OBJ_SIGNATURE")
#undef OBJ_SIGNATURE

namespace indify {
	class Indify$Member;
}
namespace java {
	namespace io {
		class DataInputStream;
		class DataOutputStream;
		class File;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace indify {

class $export Indify : public ::java::lang::Object {
	$class(Indify, 0, ::java::lang::Object)
public:
	Indify();
	void init$();
	static int32_t argsize($String* type);
	bool booleanOption($String* s);
	virtual ::java::io::File* classPathFile(::java::io::File* pathDir, $String* className);
	void ensureDirectory(::java::io::File* dir);
	static ::indify::Indify$Member* findMember(::java::util::List* mems, int32_t name, int32_t type);
	virtual void indify($String* a);
	virtual void indifyFile(::java::io::File* f, ::java::io::File* dest);
	virtual void indifyJar(::java::io::File* f, Object$* dest);
	virtual void indifyTree(::java::io::File* f, ::java::io::File* dest);
	static void main($StringArray* av);
	virtual ::java::lang::ClassLoader* makeClassLoader();
	$String* maybeExpandProperties($String* s);
	::java::io::DataInputStream* openInput(::java::io::File* f);
	::java::io::DataOutputStream* openOutput(::java::io::File* f);
	virtual void parseOptions(::java::util::List* av);
	static $Object* readInput(::java::io::DataInputStream* in, $Class* dataClass);
	static $Object* readInput($bytes* bytes, $Class* dataClass);
	static void readInputs(::java::io::DataInputStream* in, $ObjectArray* data);
	static $bytes* readRawBytes(::java::io::DataInputStream* in, int32_t size);
	virtual void run($StringArray* av);
	virtual void runApplication($StringArray* av);
	static $String* simplifyType($String* type);
	static void writeOutput(::java::io::DataOutputStream* out, Object$* data);
	static void writeOutputs(::java::io::DataOutputStream* out, $ObjectArray* data);
	static bool $assertionsDisabled;
	::java::io::File* dest = nullptr;
	$StringArray* classpath = nullptr;
	bool keepgoing = false;
	bool expandProperties = false;
	bool overwrite = false;
	bool quiet = false;
	bool verbose = false;
	bool all = false;
	int32_t verifySpecifierCount = 0;
	static const int8_t CONSTANT_Utf8 = 1;
	static const int8_t CONSTANT_Integer = 3;
	static const int8_t CONSTANT_Float = 4;
	static const int8_t CONSTANT_Long = 5;
	static const int8_t CONSTANT_Double = 6;
	static const int8_t CONSTANT_Class = 7;
	static const int8_t CONSTANT_String = 8;
	static const int8_t CONSTANT_Field = 9;
	static const int8_t CONSTANT_Method = 10;
	static const int8_t CONSTANT_InterfaceMethod = 11;
	static const int8_t CONSTANT_NameAndType = 12;
	static const int8_t CONSTANT_MethodHandle = 15;
	static const int8_t CONSTANT_MethodType = 16;
	static const int8_t CONSTANT_InvokeDynamic = 18;
	static const int8_t REF_getField = 1;
	static const int8_t REF_getStatic = 2;
	static const int8_t REF_putField = 3;
	static const int8_t REF_putStatic = 4;
	static const int8_t REF_invokeVirtual = 5;
	static const int8_t REF_invokeStatic = 6;
	static const int8_t REF_invokeSpecial = 7;
	static const int8_t REF_newInvokeSpecial = 8;
	static const int8_t REF_invokeInterface = 9;
	static const int32_t opc_nop = 0;
	static const int32_t opc_aconst_null = 1;
	static const int32_t opc_nconst_MIN = 2;
	static const int32_t opc_nconst_MAX = 15;
	static const int32_t opc_bipush = 16;
	static const int32_t opc_sipush = 17;
	static const int32_t opc_ldc = 18;
	static const int32_t opc_ldc_w = 19;
	static const int32_t opc_ldc2_w = 20;
	static const int32_t opc_aload = 25;
	static const int32_t opc_aload_0 = 42;
	static const int32_t opc_aload_MAX = 45;
	static const int32_t opc_aaload = 50;
	static const int32_t opc_astore = 58;
	static const int32_t opc_astore_0 = 75;
	static const int32_t opc_astore_MAX = 78;
	static const int32_t opc_aastore = 83;
	static const int32_t opc_pop = 87;
	static const int32_t opc_pop2 = 88;
	static const int32_t opc_dup = 89;
	static const int32_t opc_dup_x1 = 90;
	static const int32_t opc_dup_x2 = 91;
	static const int32_t opc_dup2 = 92;
	static const int32_t opc_dup2_x1 = 93;
	static const int32_t opc_dup2_x2 = 94;
	static const int32_t opc_swap = 95;
	static const int32_t opc_tableswitch = 170;
	static const int32_t opc_lookupswitch = 171;
	static const int32_t opc_areturn = 176;
	static const int32_t opc_getstatic = 178;
	static const int32_t opc_putstatic = 179;
	static const int32_t opc_getfield = 180;
	static const int32_t opc_putfield = 181;
	static const int32_t opc_invokevirtual = 182;
	static const int32_t opc_invokespecial = 183;
	static const int32_t opc_invokestatic = 184;
	static const int32_t opc_invokeinterface = 185;
	static const int32_t opc_invokedynamic = 186;
	static const int32_t opc_new = 187;
	static const int32_t opc_anewarray = 189;
	static const int32_t opc_checkcast = 192;
	static const int32_t opc_ifnull = 198;
	static const int32_t opc_ifnonnull = 199;
	static const int32_t opc_wide = 196;
	static $ObjectArray* INSTRUCTION_CONSTANTS;
	static $String* INSTRUCTION_FORMATS;
	static $StringArray* INSTRUCTION_NAMES;
	static $StringArray* INSTRUCTION_POPS;
	static $ints* INSTRUCTION_INFO;
	static ::java::util::regex::Pattern* OBJ_SIGNATURE;
	static ::java::util::regex::Pattern* WIDE_SIGNATURE;
};

} // indify

#pragma pop_macro("INSTRUCTION_CONSTANTS")
#pragma pop_macro("INSTRUCTION_FORMATS")
#pragma pop_macro("INSTRUCTION_NAMES")
#pragma pop_macro("INSTRUCTION_INFO")
#pragma pop_macro("INSTRUCTION_POPS")
#pragma pop_macro("WIDE_SIGNATURE")
#pragma pop_macro("OBJ_SIGNATURE")

#endif // _indify_Indify_h_