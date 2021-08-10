// 무작위 색, 크기의 사각형이 생성되는 비주얼 아트


// canvas 설정
function setup() {
    createCanvas(400, 200);
    background(0);  // 검정색
}

// drawing 설정
function draw() {
    rectMode(CORNERS);                                                               // 사각형 시작 위치 (캔버스 모서리)
    fill(random(0, 255), random(0, 255), random(0, 255), 40);                        // 무작위 색, alpha: 40
    rect(random(0, width), random(0, height), random(0, width), random(0, height));  // 사각형 그리기. 무작위 사이즈
}