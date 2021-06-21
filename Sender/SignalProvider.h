
typedef struct {
	float Temperature;
	float SOC;
} OutputSignalConfig;
 
typedef enum {
	TO_CONSOLE,
	Max_OutputTarget
} OutputTarget;

typedef struct {
	OutputTarget (*sendTo)(OutputSignalConfig);
} OutputTargetConfig;






