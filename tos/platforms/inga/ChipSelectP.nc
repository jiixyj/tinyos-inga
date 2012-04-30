module ChipSelectP {
    provides interface Init;
    provides interface Set<uint8_t> as ChipSelect;

    uses interface GeneralIO as Pin0;
    uses interface GeneralIO as Pin1;
    uses interface GeneralIO as Pin2;
}

implementation {
    command error_t Init.init() {
        call Pin0.makeOutput();
        call Pin1.makeOutput();
        call Pin2.makeOutput();

        call Pin0.clr();
        call Pin1.clr();
        call Pin2.clr();

        return SUCCESS;
    }

    command void ChipSelect.set(uint8_t val) {
        if (val & 1) call Pin0.set();
        else         call Pin0.clr();
        if (val & 2) call Pin1.set();
        else         call Pin1.clr();
        if (val & 4) call Pin2.set();
        else         call Pin2.clr();
    }
}
