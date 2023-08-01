function minHorseshoesToBuy(s1,s2,s3,s4){
    const colorSet = new Set([s1,s2,s3,s4]);
    const distinctColors = colorSet.size;
    const horseshoesToBuy = 4 - distinctColors;
    return horseshoesToBuy;
}
const s1 = 1, s2 = 7, s3 = 3, s4 = 3;
const result = minHorseshoesToBuy(s1,s2,s3,s4);
console.log(result);