struct AsmLine {
    int offset;
    BYTE bytes;
    int disasmlen;
    int instructionhexlen;
    char* disasm;
    char* instructionhex;
};